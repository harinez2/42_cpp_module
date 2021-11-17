#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : Form("home", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name)
    : Form(name, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) {
  *this = obj;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj) {
  if (this != &obj) {

  }
  return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}
