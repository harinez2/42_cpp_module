#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

#include <string>

class RobotomyRequestForm : public Form {
 public:
  RobotomyRequestForm();
  RobotomyRequestForm(const std::string name);
  RobotomyRequestForm(const RobotomyRequestForm& obj);
  RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
  ~RobotomyRequestForm();

 protected:
  void doAction(Bureaucrat const& executor) const;
};

#endif
