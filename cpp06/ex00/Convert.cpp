#include "Convert.hpp"

#include <iostream>
#include <limits>
#include <iomanip>
#include <stdexcept>
#include <cmath>

Convert::Convert() : data_("0") {}

Convert::Convert(std::string s) : data_(s) {}

Convert::Convert(const Convert& obj) : data_(obj.data_) {
  *this = obj;
}

Convert& Convert::operator=(const Convert& obj) {
  if (this != &obj) {
  }
  return *this;
}

Convert::~Convert() {}

char Convert::toChar() {
  if (isPseudoLiteral_nan(data_) || isPseudoLiteral_inf(data_))
    throw std::domain_error("Impossible to convert in toChar().");
  else if (data_.length() == 1 && !std::isdigit(data_[0]) && std::isprint(data_[0]))
    return data_[0];
  else {
    double d = toDouble();
    if (d < 0 || static_cast<double>(static_cast<int>(d)) != d)
      throw std::domain_error("Failed to convert char in toChar().");
    char c = static_cast<char>(toInt());
    if (std::isprint(c) == false)
      throw std::out_of_range("Impossible to print in toChar().");
    return c;
  }
  throw std::domain_error("Failed to convert char in toChar().");
}

int Convert::toInt() {
  double d = toDouble();
  if (d > std::numeric_limits<int>::max())
    throw std::overflow_error("Overflow error in toInt().");
  else if (d < std::numeric_limits<int>::min())
    throw std::underflow_error("Underflow error in toInt().");
  return static_cast<int>(d);
}

float Convert::toFloat() {
  double d = toDouble();
  if (d > std::numeric_limits<float>::max())
    throw std::overflow_error("Overflow error in toFloat().");
  else if (d < - std::numeric_limits<float>::max())
    throw std::underflow_error("Underflow error in toFloat().");
  return static_cast<float>(d);
}

double Convert::toDouble() {
  if (data_.length() == 0)
    throw std::invalid_argument("Length is zero in toDouble().");
  else if (isPseudoLiteral_nan(data_))
    throw std::domain_error("Impossible to print in toDouble().");
  else if (isPseudoLiteral_inf(data_))
    throw std::out_of_range("Impossible to print in toDouble().");
  else if (data_.length() == 1 && !std::isdigit(data_[0]))
    return static_cast<int>(data_[0]);

  bool minus = false;
  unsigned long i = 0;
  for (; i < data_.length(); ++i) {
    if (data_[i] == '+')
      ;
    else if (data_[i] == '-')
      minus = minus == true ? false : true;
    else
      break;
  }
  double read = readNum(i, 10);
  if (i < data_.length() && data_[i] == '.') {
    ++i;
    read += readNum(i, 0.1);
  }
  if (minus)
    read *= -1;

  if (i != data_.length() && !(i + 1 == data_.length() && data_[i] == 'f'))
    throw std::invalid_argument("Cannot read input in toDouble().");
    
  if (read > std::numeric_limits<double>::max())
    throw std::overflow_error("Overflow error in toFloat().");
  else if (read < - std::numeric_limits<double>::max())
    throw std::underflow_error("Underflow error in toFloat().");
  return read;
}

void Convert::printChar() {
  char c;
  try {
    c = toChar();
  } catch(std::out_of_range& e) {
    std::cout << "char: Non displayable" << std::endl;
    return;
  } catch(std::exception& e) {
    std::cout << "char: impossible" << std::endl;
    return;
  }
  std::cout << "char: '" << c << "'" << std::endl;
}

void Convert::printInt() {
  std::cout << "int: ";
  try {
    std::cout << toInt() << std::endl;
  } catch(std::exception& e) {
    std::cout << "impossible" << std::endl;
  }
}

void Convert::printFloat() {
  std::cout << "float: ";
  try {
    std::cout << std::fixed << std::setprecision(1) << toFloat() << "f" << std::endl;
  } catch(std::domain_error& e) {
    std::cout << data_.substr(0, 3) << "f" << std::endl;
    return;
  } catch(std::out_of_range& e) {
    std::cout << data_.substr(0, 4) << "f" << std::endl;
    return;
  } catch(std::exception& e) {
    std::cout << "impossible" << std::endl;
  }
}

void Convert::printDouble() {
  std::cout << "double: ";
  try {
    std::cout << std::fixed << std::setprecision(1) << toDouble() << std::endl;
  } catch(std::domain_error& e) {
    std::cout << data_.substr(0, 3) << std::endl;
    return;
  } catch(std::out_of_range& e) {
    std::cout << data_.substr(0, 4) << std::endl;
    return;
  } catch(std::exception& e) {
    std::cout << "impossible" << std::endl;
  }
}

double Convert::readNum(unsigned long& i, double base) {
  double read = 0;
  unsigned long starti = i;
  for (; i < data_.length(); ++i) {
    if (!std::isdigit(data_[i]))
      break;
    else if (base >= 1)
      read = read * base + data_[i] - '0';
    else if (base < 1)
      read = read + (data_[i] - '0') * std::pow(base, i - starti + 1);
  }
  return read;
}

bool Convert::isPseudoLiteral_nan(const std::string& s) {
  if (s.compare("nan") == 0 || s.compare("nanf") == 0)
    return true;
  else
    return false;
}

bool Convert::isPseudoLiteral_inf(const std::string& s) {
  if (s.compare("-inff") == 0 || s.compare("+inff") == 0
      || s.compare("-inf") == 0 || s.compare("+inf") == 0)
    return true;
  else
    return false;
}
