#include "RobotomyRequestForm.hpp"

#include <cstdlib>
#include <ctime>

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

void RobotomyRequestForm::execute(Bureaucrat const& executor) const {
  Form::execute(executor);
  std::cout << "ZZZZzzzzzzz......." << std::endl;
  if (std::rand() % 2 == 0)
    std::cout << executor.getName() << " has been robotomized succesfully." << std::endl;
  else
    std::cout << executor.getName() << " has been failed to robotomize." << std::endl;
}
