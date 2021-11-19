#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <iostream>
#include <string>

Intern::Intern() {}

Intern::Intern(const Intern& obj) {
  *this = obj;
}

Intern& Intern::operator=(const Intern& obj) {
  if (this != &obj) {
  }
  return *this;
}

Intern::~Intern() {}

Form* Intern::makeShrubberyCreationForm(const std::string& target) const {
  return new ShrubberyCreationForm(target);
}

Form* Intern::makeRobotomyRequestForm(const std::string& target) const {
  return new RobotomyRequestForm(target);
}

Form* Intern::makePresidentialPardonForm(const std::string& target) const {
  return new PresidentialPardonForm(target);
}

Form* Intern::makeForm(const std::string& form_name, const std::string& target) {
  Form* (Intern::*make_form_func[3])(const std::string&) const = {
    &Intern::makeShrubberyCreationForm,
    &Intern::makeRobotomyRequestForm,
    &Intern::makePresidentialPardonForm
  };

  int form_code = getFormCode(form_name);
  if (form_code == -1) {
    std::cerr << "No such form." << std::endl;
    return NULL;
  }
  Form* form = (this->*make_form_func[form_code])(target);
  std::cout << "Intern creates " << form->getName() << std::endl;
  return form;
}

int Intern::getFormCode(const std::string& form_name) {
  const std::string form_name_lst_[3] = {
    "home",
    "robotomy request",
    "presidential pardon"
  };

  for (int i = 0; i < 3; ++i)
    if (form_name_lst_[i] == form_name)
      return i;
  return -1;
}
