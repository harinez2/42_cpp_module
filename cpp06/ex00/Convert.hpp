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
  float toFloat();
  double toDouble();

  void printChar();
  void printInt();
  void printFloat();
  void printDouble();

 private:
  const std::string data_;
  // const double data_double;
  // int isConvertedToDouble;
  // int type_;
  
  bool isPseudoLiteral(const std::string& s);
  double readNum(unsigned long& i, double base);
};

#endif
