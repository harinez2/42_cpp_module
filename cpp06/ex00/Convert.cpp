#include "Convert.hpp"

#include <iostream>
#include <limits>
#include <stdexcept>

// char : length=1, if not, "impossible"
//        isprint, if not, "Non displayable"
Convert::Convert(std::string s) : data_(s) {
  if (data_.length() == 0)
    type_ = 0;
  else if (isPseudoLiteral(s)) {
    // num
    type_ = 1;
  } else if (data_.length() == 1 && std::isprint(data_[0])) {
    //char
  } else {
    // is int
    // is char

  }
}

bool Convert::isPseudoLiteral(const std::string& s) {
  if (s.compare("-inff") == 0 || s.compare("-inf") == 0
      || s.compare("+inff") == 0 || s.compare("+inf") == 0
      || s.compare("nanf") == 0 || s.compare("nan") == 0)
    return true;
  else
    return false;
}

// bool Convert::isFloat() {
//   int period_cnt = 0;
//   bool float_flg = false;
//   for (int i = 0; i < data_.length(); ++i) {
//     if (std::isdigit(data_[i])
//       continue;
//     else if (data_[i] == '.')
//       ++period_cnt;
//     else if (data_[i] == 'f' && i == data_.length() - 1)
//       float_flg = true;
//     else
//       break;
//   }
//   return false;
// }

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
  long read = 0;
  unsigned long j = i;
  for (; j < data_.length(); ++j) {
    if (std::isdigit(data_[j]))
      read = read * 10 + data_[j] - '0';
    else
      break;
    if (read > std::numeric_limits<int>::max())
      break;
  }
  if (minus)
    read *= -1;
  if (read > std::numeric_limits<int>::max())
    throw std::overflow_error("Overflow error in toInt().");
  else if (read < std::numeric_limits<int>::min())
    throw std::underflow_error("Underflow error in toInt().");
  else if (j != data_.length())
    throw std::invalid_argument("Cannot read input in toInt().");
  return read;
}

// float Convert::toFloat() {

// }

// double Convert::toDouble() {

// }


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

// void Convert::printFloat() { std::cout << "float " << toFloat() << std::endl; }
// void Convert::printDouble() { std::cout << "double " << toDouble() << std::endl; }


// int Convert::chatToInt(char* s) {n
//   (void)s;
//   std::cout << "char: " ;//<< static_cast<char>(s) << std::endl;
//   return 0;
// }
