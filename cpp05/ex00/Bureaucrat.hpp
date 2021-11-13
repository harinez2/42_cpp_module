#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat {
 public:
  Bureaucrat();
  Bureaucrat(const std::string name, const int grade);
  Bureaucrat(const Bureaucrat& obj);
  Bureaucrat& operator=(const Bureaucrat& obj);
  ~Bureaucrat();

  std::string getName();
  int getGrade();
  void incrementGrade();
  void decrementGrade();

 protected:
  const std::string kName_;
  int grade_;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif
