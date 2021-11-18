#include "Bureaucrat.hpp"

#include <iostream>

void test_bureaucrat_canonicals(const std::string& name, int initial_grade) {
  try {
    Bureaucrat b(name, initial_grade);
    std::cout << b << std::endl;
    b.incrementGrade();
    std::cout << b << std::endl;
    b.decrementGrade();
    std::cout << b << std::endl;

    Bureaucrat c(b);
    std::cout << c << std::endl;
    c.incrementGrade();
    std::cout << c << std::endl;
    c.decrementGrade();
    std::cout << c << std::endl;

    Bureaucrat d;
    b.incrementGrade();
    d = b;
    std::cout << d << std::endl;
    d.incrementGrade();
    std::cout << d << std::endl;
    d.decrementGrade();
    std::cout << d << std::endl;
  }
  catch (std::exception & e) {
    std::cerr << e.what() << std::endl;
  }
  std::cout << std::endl;
}

void test_bureaucrat_basic(const std::string& name, int initial_grade) {
  try {
    Bureaucrat b(name, initial_grade);
    std::cout << b << std::endl;
    b.incrementGrade();
    std::cout << b << std::endl;
    b.decrementGrade();
    std::cout << b << std::endl;
    b.decrementGrade();
    std::cout << b << std::endl;
  }
  catch (std::exception & e) {
    std::cerr << e.what() << std::endl;
  }
  std::cout << std::endl;
}

int main(void)
{
  // normal case
  test_bureaucrat_canonicals("me", 10);
  test_bureaucrat_basic("me", 10);
  std::cout << "-------------" << std::endl;

  // error cases
  test_bureaucrat_basic("me", -1);
  test_bureaucrat_basic("me", 0);
  test_bureaucrat_basic("me", 151);
  test_bureaucrat_basic("me", 1);
  test_bureaucrat_basic("me", 150);

  return 0;
}
