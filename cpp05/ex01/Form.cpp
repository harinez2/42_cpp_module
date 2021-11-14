#include "Form.hpp"

Form::Form()
    : kName_("buy-goods"),
      grade_required_to_sign_(30),
      grade_required_to_execute_(40),
      signed_(false) {}

Form::Form(const std::string name,
    const int grade_required_to_sign, const int grade_required_to_execute)
    : kName_(name),
      grade_required_to_sign_(grade_required_to_sign),
      grade_required_to_execute_(grade_required_to_execute),
      signed_(false) {
  if (grade_required_to_sign < 1 || grade_required_to_execute < 1)
    throw Form::GradeTooHighException("specified grade in constructor is too high");
  else if (150 < grade_required_to_sign || 150 < grade_required_to_sign)
    throw Form::GradeTooLowException("specified grade in constructor is too low");
}

Form::Form(const Form& obj)
    : kName_(obj.kName_),
      grade_required_to_sign_(obj.grade_required_to_sign_),
      grade_required_to_execute_(obj.grade_required_to_execute_),
      signed_(obj.signed_) {}

Form& Form::operator=(const Form& obj) {
  if (this == &obj) {
    this->signed_ = obj.signed_;
  }
  return *this;
}

Form::~Form() {}

std::string Form::getName() const { return kName_; }
bool Form::getSigned() const { return signed_; }

void Form::beSigned(Bureaucrat& b) {
  if (b.getGrade() > grade_required_to_sign_)
    throw GradeTooLowException("cannot be sign because the bureaucrat grade is too low");
  signed_ = true;
}

Form::GradeTooHighException::GradeTooHighException(const std::string& message)
    : invalid_argument(message) {}
Form::GradeTooLowException::GradeTooLowException(const std::string& message)
    : invalid_argument(message) {}

std::ostream& operator<<(std::ostream& os, const Form& obj) {
  os << obj.getName() << ", signed status is " << obj.getSigned();
  return os;
}
