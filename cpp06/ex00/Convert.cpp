#include "Convert.hpp"

#include <iostream>
#include <limits>
#include <iomanip>
#include <stdexcept>

Convert::Convert(std::string s) : data_(s) {}

Convert::~Convert() {}

char Convert::toChar() {
  if (isPseudoLiteral(data_))
    throw std::domain_error("impossible");
  else if (data_.length() == 1 && !std::isdigit(data_[0]) && std::isprint(data_[0]))
    return data_[0];
  else {
    char c = static_cast<char>(toInt());
    if (std::isprint(c) == false)
      throw std::out_of_range("Impossible to print in toChar().");
    return c;
  }
  throw std::out_of_range("Failed to convert char in toChar().");
}

int Convert::toInt() {
  return static_cast<int>(toDouble());
}

float Convert::toFloat() {
  return static_cast<float>(toDouble());
}

double Convert::toDouble() {
  if (isPseudoLiteral(data_))
    throw std::domain_error("impossible");
  
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

  if (read > std::numeric_limits<int>::max())
    throw std::overflow_error("Overflow error in toInt().");
  else if (read < std::numeric_limits<int>::min())
    throw std::underflow_error("Underflow error in toInt().");
  else if (i != data_.length() && !(i + 1 == data_.length() && data_[i] == 'f'))
    throw std::invalid_argument("Cannot read input in toInt().");
  return read;
}

void Convert::printChar() {
  try {
    std::cout << "  debugchar: '" << static_cast<char>(toInt()) << "'" << std::endl;//test
  } catch(std::exception& e) {
    std::cout << std::endl;
  }

  char c;
  try {
    c = toChar();
  } catch(std::domain_error& e) {
    std::cout << "char: impossible" << std::endl;
    return;
  } catch(std::exception& e) {
    std::cout << "char: Non displayable" << std::endl;
    return;
  }
  std::cout << "char: '" << c << "'" << std::endl;
}

void Convert::printInt() {
  std::cout << "int : ";
  try {
    std::cout << toInt() << std::endl;
  } catch(std::exception& e) {
    std::cout << "impossible" << std::endl;
  }
}

void Convert::printFloat() {
  std::cout << "float : ";
  try {
    std::cout << std::fixed << std::setprecision(1) << toFloat() << "f" << std::endl;
  } catch(std::domain_error& e) {
    std::cout << data_ << std::endl;
    return;
  } catch(std::exception& e) {
    std::cout << "impossible" << std::endl;
  }
}

void Convert::printDouble() {
  std::cout << "double : ";
  try {
    std::cout << std::fixed << std::setprecision(1) << toDouble() << std::endl;
  } catch(std::domain_error& e) {
    std::cout << data_ << std::endl;
    return;
  } catch(std::exception& e) {
    std::cout << "impossible" << std::endl;
  }
}

double Convert::readNum(unsigned long& i, double base) {
  long overflow_limit = std::numeric_limits<int>::max();
  overflow_limit++;
  double read = 0;
  for (; i < data_.length(); ++i) {
    if (!std::isdigit(data_[i]))
      break;
    else if (read <= overflow_limit) {
      if (base >= 1)
        read = read * base + data_[i] - '0';
      else
        read = read + (data_[i] - '0') * base;
    }
  }
  return read;
}

bool Convert::isPseudoLiteral(const std::string& s) {
  if (s.compare("-inff") == 0 || s.compare("-inf") == 0
      || s.compare("+inff") == 0 || s.compare("+inf") == 0
      || s.compare("nanf") == 0 || s.compare("nan") == 0)
    return true;
  else
    return false;
}
