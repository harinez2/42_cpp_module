#include "Bureaucrat.hpp"

int main(void)
{
  try {
    Bureaucrat b("me", 0);
  }
  catch (std::exception & e) {
    std::cerr << e.what() << std::endl;
  }

  return 0;
}
