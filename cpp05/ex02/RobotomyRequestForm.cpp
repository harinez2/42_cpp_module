#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
    : Form("me", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string name)
    : Form(name, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) {
  *this = obj;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj) {
  if (this != &obj) {

  }
  return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}
