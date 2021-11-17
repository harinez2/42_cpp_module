#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : Form("home", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string name)
    : Form(name, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) {
  *this = obj;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj) {
  if (this != &obj) {

  }
  return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}
