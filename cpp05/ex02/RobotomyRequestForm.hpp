#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
 public:
  RobotomyRequestForm();
  RobotomyRequestForm(const std::string name);
  RobotomyRequestForm(const RobotomyRequestForm& obj);
  RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
  ~RobotomyRequestForm();

  void execute(Bureaucrat const& executor) const;
};

#endif
