#include "Bureaucrat.hpp"

#include <iostream>

void test_bureaaucrat(const std::string& name, int initial_grade) {
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
  test_bureaaucrat("me", 10);

  // error cases
  test_bureaaucrat("me", 0);
  test_bureaaucrat("me", 151);
  test_bureaaucrat("me", 1);
  test_bureaaucrat("me", 150);

  return 0;
}
