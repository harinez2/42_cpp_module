#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void test_shruberry(const int bureaucrat_grade) {
  try {
    Bureaucrat b("A bureaucrat", bureaucrat_grade);
    std::cout << b << std::endl;
    ShrubberyCreationForm form("shruberry");
    std::cout << form << std::endl;
    form.beSigned(b);
    std::cout << form << std::endl;
    form.execute(b);
    std::cout << form << std::endl;
  }
  catch (std::exception & e) {
    std::cerr << e.what() << std::endl;
  }
  std::cout << std::endl;
}

void test_robotomy(const int bureaucrat_grade) {
  try {
    Bureaucrat b("A bureaucrat", bureaucrat_grade);
    std::cout << b << std::endl;
    RobotomyRequestForm form("robotomy");
    std::cout << form << std::endl;
    form.beSigned(b);
    std::cout << form << std::endl;
    form.execute(b);
    std::cout << form << std::endl;
  }
  catch (std::exception & e) {
    std::cerr << e.what() << std::endl;
  }
  std::cout << std::endl;
}

void test_pardon(const int bureaucrat_grade) {
  try {
    Bureaucrat b("A bureaucrat", bureaucrat_grade);
    std::cout << b << std::endl;
    PresidentialPardonForm form("pardon");
    std::cout << form << std::endl;
    form.beSigned(b);
    std::cout << form << std::endl;
    form.execute(b);
    std::cout << form << std::endl;
  }
  catch (std::exception & e) {
    std::cerr << e.what() << std::endl;
  }
  std::cout << std::endl;
}

int main(void)
{
  // normal case
  test_shruberry(30);
  // error case
  test_shruberry(146);
  test_shruberry(138);
  std::cout << "---------------------" << std::endl;

  // normal case
  test_robotomy(30);
  // error case
  test_robotomy(146);
  test_robotomy(50);
  std::cout << "---------------------" << std::endl;

  // normal case
  test_pardon(5);
  // error case
  test_pardon(146);
  test_pardon(20);

  return 0;
}
