#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : kName_("fresh-person"), grade_(150) {}

Bureaucrat::Bureaucrat(const std::string name, const int grade)
    : kName_(name) {
  if (grade < 1)
    throw Bureaucrat::GradeTooHighException("specified grade in constructor is too high");
  else if (150 < grade)
    throw Bureaucrat::GradeTooLowException("specified grade in constructor is too low");
  grade_ = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) {
  *this = obj;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {
  if (this == &obj) {
    this->grade_ = obj.grade_;
  }
  return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const { return kName_; }
int Bureaucrat::getGrade() const { return grade_; }

void Bureaucrat::incrementGrade() {
  if (grade_ == 1)
    throw Bureaucrat::GradeTooHighException("already highest grade");
  --grade_;
}

void Bureaucrat::decrementGrade() {
  if (grade_ == 150)
    throw Bureaucrat::GradeTooLowException("already lowest grade");
  ++grade_;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string& message)
    : invalid_argument(message) {}
Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string& message)
    : invalid_argument(message) {}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj) {
  os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
  return os;
}
