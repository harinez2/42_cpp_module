#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

void test_shruberry(const int bureaucrat_grade) {
  try {
    Bureaucrat b("A bureaucrat", bureaucrat_grade);
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

int main(void)
{
  // normal case
  test_shruberry(30);

  return 0;
}
