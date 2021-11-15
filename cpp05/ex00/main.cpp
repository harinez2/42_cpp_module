#include "Bureaucrat.hpp"

#include <iostream>

int main(void)
{
  // normal case
  try {
    Bureaucrat b("me", 10);
    std::cout << b << std::endl;
    b.incrementGrade();
    std::cout << b << std::endl;
    b.decrementGrade();
    std::cout << b << std::endl;
  }
  catch (std::exception & e) {
    std::cerr << e.what() << std::endl;
  }
  std::cout << std::endl;

  // error cases

  try {
    Bureaucrat b("me", 0);
  }
  catch (std::exception & e) {
    std::cerr << e.what() << std::endl;
  }
  std::cout << std::endl;

  try {
    Bureaucrat b("me", 151);
  }
  catch (std::exception & e) {
    std::cerr << e.what() << std::endl;
  }
  std::cout << std::endl;

  try {
    Bureaucrat b("me", 1);
    std::cout << b << std::endl;
    b.incrementGrade();
  }
  catch (std::exception & e) {
    std::cerr << e.what() << std::endl;
  }
  std::cout << std::endl;

  try {
    Bureaucrat b("me", 150);
    std::cout << b << std::endl;
    b.decrementGrade();
  }
  catch (std::exception & e) {
    std::cerr << e.what() << std::endl;
  }

  return 0;
}
