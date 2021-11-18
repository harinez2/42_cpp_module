#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


#include <iostream>

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

  enum form_num {
    ShrubberyCreationForm,
    RobotomyRequestForm,
    PresidentialPardonForm
  };
  std::string form_name_lst[3] = {
    "home",
    "robotomy request",
    "presidential pardon"
  };

Form* Intern::makeForm(const std::string& form_name, const std::string& target_form) {
  Form* form;
  switch (getFormCode(target_form)) {
    case ShrubberyCreationForm:
      form = new ShrubberyCreationForm::ShrubberyCreationForm();
      break;
    case RobotomyRequestForm:
      form = new RobotomyRequestForm::RobotomyRequestForm();
      break;
    case PresidentialPardonForm:
      form = new PresidentialPardonForm::PresidentialPardonForm();
      break;
  }
  std::cout << "Intern creates " << form->getName() << std::endl;
  return form;
}

int Intern::getFormCode(const std::string& form_name) {
  for (int i = 0; i < 3; ++i)
    if (form_name_lst[i] == form_name)
      return i;
  return -1;
}