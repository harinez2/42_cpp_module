#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
  try {
    Bureaucrat b("me", 30);
    Form f;
    std::cout << f << std::endl;
    b.signForm(f);
    std::cout << f << std::endl;
    std::cout << std::endl;
  }
  catch (std::exception & e) {
    std::cerr << e.what() << std::endl;
  }

  try {
    Bureaucrat b("me", 50);
    Form f;
    std::cout << f << std::endl;
    b.signForm(f);
    std::cout << f << std::endl;
    std::cout << std::endl;
  }
  catch (std::exception & e) {
    std::cerr << e.what() << std::endl;
  }

  return 0;
}
