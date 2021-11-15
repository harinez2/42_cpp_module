#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

#include <string>
#include <iostream>
#include <exception>

class Form {
 public:
  Form();
  Form(const std::string name, 
    const int grade_required_to_sign, const int grade_required_to_execute);
  Form(const Form& obj);
  Form& operator=(const Form& obj);
  ~Form();

  std::string getName() const;
  int getGradeRequiredToSign() const;
  int getGradeRequiredToExecute() const;
  bool getSigned() const;

  void beSigned(Bureaucrat& b);

  class GradeTooHighException : public std::domain_error {
   public:
    GradeTooHighException(const std::string& message);
  };
  class GradeTooLowException : public std::domain_error {
   public:
    GradeTooLowException(const std::string& message);
  };

 private:
  const std::string kName_;
  const int kGradeRequiredToSign_;
  const int kGradeRequiredToExecute_;
  bool signed_;
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif  // FORM_HPP
