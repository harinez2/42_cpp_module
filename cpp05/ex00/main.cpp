#include "Bureaucrat.hpp"

int main(void)
{
  try {
    Bureaucrat b("me", 0);
  }
  catch (std::exception & e) {
    std::cerr << e.what() << std::endl;
  }

  try {
    Bureaucrat b("me", 151);
  }
  catch (std::exception & e) {
    std::cerr << e.what() << std::endl;
  }

  try {
    Bureaucrat b("me", 1);
    b.incrementGrade();
  }
  catch (std::exception & e) {
    std::cerr << e.what() << std::endl;
  }

  try {
    Bureaucrat b("me", 150);
    b.decrementGrade();
  }
  catch (std::exception & e) {
    std::cerr << e.what() << std::endl;
  }

  return 0;
}
