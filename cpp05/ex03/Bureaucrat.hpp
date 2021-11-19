#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Form;

class Bureaucrat {
 public:
  Bureaucrat();
  Bureaucrat(const std::string name, const int grade);
  Bureaucrat(const Bureaucrat& obj);
  Bureaucrat& operator=(const Bureaucrat& obj);
  ~Bureaucrat();

  std::string getName() const;
  int getGrade() const;

  void incrementGrade();
  void decrementGrade();
  void signForm(Form& form);
  void executeForm(Form const& form);

  class GradeTooHighException : public std::domain_error {
   public:
    GradeTooHighException(const std::string& message);
  };
  class GradeTooLowException : public std::domain_error {
   public:
    GradeTooLowException(const std::string& message);
  };

 protected:
  const std::string kName_;
  int grade_;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif  // BUREAUCRAT_HPP
