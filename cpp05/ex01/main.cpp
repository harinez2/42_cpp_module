#include "Bureaucrat.hpp"
#include "Form.hpp"

#include <iostream>
#include <exception>

void test_form_canonicals(
    const std::string& name,
    const int grade_required_to_sign,
    const int grade_required_to_execute) {
  try {
    Form f;
    std::cout << f << std::endl;

    Form g(name, grade_required_to_sign, grade_required_to_execute);
    std::cout << g << std::endl;

    Form h(g);
    std::cout << h << std::endl;

    Form i(name + "_copy", grade_required_to_sign + 1, grade_required_to_execute + 1);
    Bureaucrat b("A bureaucrat", 10);
    b.signForm(i);
    f = i;
    std::cout << f << std::endl;
  }
  catch (std::exception & e) {
    std::cerr << e.what() << std::endl;
  }
  std::cout << std::endl;
}

void test_form(const int bureaucrat_grade,
               const int grade_required_to_sign,
               const int grade_required_to_execute) {
  try {
    Bureaucrat b("A bureaucrat", bureaucrat_grade);
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
  test_form_canonicals("form", 23, 24);
  test_form(30, 70, 80);
  std::cout << "-------------" << std::endl;

  // error cases
  test_form(30, 0, 80);
  test_form(30, 70, 0);
  test_form(30, 151, 80);
  test_form(30, 70, 151);
  test_form(30, 10, 80);

  return 0;
}
