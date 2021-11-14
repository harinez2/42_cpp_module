#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : kName_("fresh-person"), grade_(150) {}

Bureaucrat::Bureaucrat(const std::string name, const int grade)
    : kName_(name) {
  if (grade < 1)
    throw Bureaucrat::GradeTooHighException("grade is too high in constructor");
  else if (150 < grade)
    throw Bureaucrat::GradeTooLowException("grade is too low in constructor");
  grade_ = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
    : kName_(obj.kName_), grade_(obj.grade_) {}

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
    throw Bureaucrat::GradeTooHighException("");
  --grade_;
}

void Bureaucrat::decrementGrade() {
  if (grade_ == 150)
    throw Bureaucrat::GradeTooLowException("");
  ++grade_;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj) {
  os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
  return os;
}
