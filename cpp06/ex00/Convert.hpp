#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <string>
#include <stdexcept>

class Convert {
 public:
  Convert(std::string s);
  ~Convert();

  char toChar();
  int toInt();
  // float toFloat();
  // double toDouble();

  void printChar();
  void printInt();
  // void printFloat();
  // void printDouble();

 private:
  const std::string data_;
  int type_;
  
  bool isPseudoLiteral(const std::string& s);
};

#endif
