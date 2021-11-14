#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {

 private:
  static const int grade_required_to_sign_;
  static const int grade_required_to_execute_;
};

#endif
