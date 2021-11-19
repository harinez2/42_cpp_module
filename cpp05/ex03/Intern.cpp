#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <iostream>
#include <string>

const std::string Intern::form_name_lst_[3] = {
  "home",
  "robotomy request",
  "presidential pardon"
};

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

Form* Intern::makeForm(const std::string& form_name, const std::string& target) {
  Form* form;
  switch (getFormCode(form_name)) {
    case kShrubberyCreationForm:
      form = new class ShrubberyCreationForm(target);
      break;
    case kRobotomyRequestForm:
      form = new class RobotomyRequestForm(target);
      break;
    case kPresidentialPardonForm:
      form = new class PresidentialPardonForm(target);
      break;
    default:
      std::cerr << "No such form." << std::endl;
      return NULL;
  }
  std::cout << "Intern creates " << form->getName() << std::endl;
  return form;
}

int Intern::getFormCode(const std::string& form_name) {
  for (int i = 0; i < 3; ++i)
    if (form_name_lst_[i] == form_name)
      return i;
  return -1;
}
