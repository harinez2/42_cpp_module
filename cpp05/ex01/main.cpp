#include "Bureaucrat.hpp"
#include "Form.hpp"

#include <iostream>
#include <exception>

void test_form(const int bureaucrat_grade,
               const int grade_required_to_sign,
               const int grade_required_to_execute) {
  try {
    Bureaucrat b("A bureaucrat", bureaucrat_grade);
    // Form f;
    Form form("sample-form", grade_required_to_sign, grade_required_to_execute);
    std::cout << form << std::endl;
    b.signForm(form);
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
  test_form(30, 70, 80);

  // error cases
  test_form(30, 0, 80);
  test_form(30, 70, 0);
  test_form(30, 151, 80);
  test_form(30, 70, 151);
  test_form(30, 10, 80);

  return 0;
}
