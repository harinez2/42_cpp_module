#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : kName_("fresh-person"), grade_(150) {}

Bureaucrat::Bureaucrat(const std::string name, const int grade)
    : kName_(name) {
  if (grade < 1)
    throw Bureaucrat::GradeTooHighException("Specified grade in constructor is too high.");
  else if (150 < grade)
    throw Bureaucrat::GradeTooLowException("Specified grade in constructor is too low.");
  grade_ = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : kName_(obj.kName_) {
  *this = obj;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {
  if (this != &obj) {
    grade_ = obj.grade_;
  }
  return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const { return kName_; }
int Bureaucrat::getGrade() const { return grade_; }

void Bureaucrat::incrementGrade() {
  if (grade_ == 1)
    throw Bureaucrat::GradeTooHighException("Already highest grade.");
  --grade_;
}

void Bureaucrat::decrementGrade() {
  if (grade_ == 150)
    throw Bureaucrat::GradeTooLowException("Already lowest grade.");
  ++grade_;
}

void Bureaucrat::signForm(Form& form) {
  try {
    form.beSigned(*this);
    std::cout << kName_ << " signs " << form.getName() << "." << std::endl;
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string& message)
    : domain_error(message) {}
Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string& message)
    : domain_error(message) {}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj) {
  os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
  return os;
}
