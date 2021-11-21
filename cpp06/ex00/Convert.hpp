#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <string>
#include <stdexcept>

class Convert {
 public:
  Convert(std::string s);
  Convert(const Convert& obj);
  Convert& operator=(const Convert& obj);
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
  double data_double_;
  // const double data_double;
  // int isConvertedToDouble;
  // int type_;
  
  Convert();
  bool isPseudoLiteral_nan(const std::string& s);
  bool isPseudoLiteral_inf(const std::string& s);
  double readNum(unsigned long& i, double base);
};

#endif
