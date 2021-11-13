#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : kName_("fresh-person"), grade_(150) {}

Bureaucrat::Bureaucrat(const std::string name, const int grade)
    : kName_("fresh-person") {
  if (grade < 1 || 150 < grade)
    throw std::exception();
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

std::string Bureaucrat::getName() { return kName_; }
int Bureaucrat::getGrade() { return grade_; }

void Bureaucrat::incrementGrade() {
  if (grade_ == 1)
    throw std::exception();
  --grade_;
}

void Bureaucrat::decrementGrade() {
  if (grade_ == 150)
    throw std::runtime_error("a");
  ++grade_;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj) {
  os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
  return os;
}
