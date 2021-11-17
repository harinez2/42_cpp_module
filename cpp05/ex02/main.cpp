#include "Bureaucrat.hpp"
#include "Form.hpp"

void test_shruberry(const int bureaucrat_grade,
                    const int grade_required_to_sign,
                    const int grade_required_to_execute) {
  try {
    Bureaucrat b("A bureaucrat", bureaucrat_grade);
    Form form("shruberry", grade_required_to_sign, grade_required_to_execute);
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
  test_shruberry(30, 70, 80);

  return 0;
}
