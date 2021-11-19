#include "Intern.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

#include <iostream>
#include <string>
#include <exception>

void test_intern(
    std::string bureaucrat_name,
    int bureaucrat_grade,
    std::string form_name,
    std::string target) {
  Intern someRandomIntern;
  Form* rrf;
  Bureaucrat b(bureaucrat_name, bureaucrat_grade);

  rrf = someRandomIntern.makeForm(form_name, target);
  if (rrf) {
    try {
      rrf->beSigned(b);
      rrf->execute(b);
    } catch (std::exception & e) {
      std::cerr << e.what() << std::endl;
    }
  }
  delete rrf;
  std::cout << "------------------" << std::endl;
}

int main(void) {
  // success case
  test_intern("A bureaucrat", 10, "robotomy request", "Bender");
  test_intern("A bureaucrat", 10, "home", "nice one");
  test_intern("A bureaucrat", 5, "presidential pardon", "plzzzz");

  // error case
  test_intern("A bureaucrat", 5, "dummy", "plzzzz");
  test_intern("A bureaucrat", 150, "presidential pardon", "plzzzz");
  test_intern("A bureaucrat", 20, "presidential pardon", "plzzzz");
}
