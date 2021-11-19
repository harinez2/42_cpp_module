#include "Form.hpp"

#include <string>
#include <iostream>
#include <exception>

Form::Form()
    : kName_("new-form"),
      kGradeRequiredToSign_(30),
      kGradeRequiredToExecute_(40),
      signed_(false) {}

Form::Form(const std::string name,
           const int grade_required_to_sign,
           const int grade_required_to_execute)
    : kName_(name),
      kGradeRequiredToSign_(grade_required_to_sign),
      kGradeRequiredToExecute_(grade_required_to_execute),
      signed_(false) {
  if (grade_required_to_sign < 1 || grade_required_to_execute < 1)
    throw GradeTooHighException("Specified grade in constructor is too high.");
  else if (150 < grade_required_to_sign || 150 < grade_required_to_execute)
    throw GradeTooLowException("Specified grade in constructor is too low.");
}

Form::Form(const Form& obj)
    : kName_(obj.kName_),
      kGradeRequiredToSign_(obj.kGradeRequiredToSign_),
      kGradeRequiredToExecute_(obj.kGradeRequiredToExecute_),
      signed_(obj.signed_) {}

Form& Form::operator=(const Form& obj) {
  if (this != &obj) {
    signed_ = obj.signed_;
  }
  return *this;
}

Form::~Form() {}

std::string Form::getName() const { return kName_; }
int Form::getGradeRequiredToSign() const { return kGradeRequiredToSign_; }
int Form::getGradeRequiredToExecute() const { return kGradeRequiredToExecute_; }
bool Form::getSigned() const { return signed_; }

void Form::beSigned(Bureaucrat& b) {
  if (kGradeRequiredToSign_ < b.getGrade())
    throw GradeTooLowException("Required bureaucrat grade to sign is too low.");
  signed_ = true;
  std::cout << "Form " << kName_ << " is signed by " << b.getName() << std::endl;
}

void Form::execute(Bureaucrat const& executor) const {
  if (!signed_)
    throw FormNotSignedException("Form " + kName_ + " is not signed.");
  else if (kGradeRequiredToExecute_ < executor.getGrade())
    throw GradeTooLowException(
      executor.getName() + " cannot execute " + kName_ + " because the bureaucrat grade is too low.");
  std::cout << executor.getName() << " executes " << kName_ << "." << std::endl;
  doAction(executor);
}

Form::GradeTooHighException::GradeTooHighException(const std::string& message)
    : domain_error(message) {}
Form::GradeTooLowException::GradeTooLowException(const std::string& message)
    : domain_error(message) {}
Form::FormNotSignedException::FormNotSignedException(const std::string& message)
    : domain_error(message) {}

std::ostream& operator<<(std::ostream& os, const Form& obj) {
  os << "Form " << obj.getName()
      << ", grade required to sign is " << obj.getGradeRequiredToSign()
      << ", grade required to execute is " << obj.getGradeRequiredToExecute()
      << ", signed status is " << obj.getSigned() << ".";
  return os;
}
