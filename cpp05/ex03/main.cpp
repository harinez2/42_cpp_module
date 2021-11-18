#include "Intern.hpp"
#include "Form.hpp"

int main(void) {
  Intern someRandomIntern;
  Form* rrf;
  Bureaucrat b("A bureaucrat", 10);

  rrf = someRandomIntern.makeForm("robotomy request", "Bender");
  rrf->beSigned(b);
  rrf->execute(b);
  rrf = someRandomIntern.makeForm("home", "nice one");
  rrf->beSigned(b);
  rrf->execute(b);
}
