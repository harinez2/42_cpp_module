#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

#include <string>

class PresidentialPardonForm : public Form {
 public:
  PresidentialPardonForm();
  PresidentialPardonForm(const std::string name);
  PresidentialPardonForm(const PresidentialPardonForm& obj);
  PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
  ~PresidentialPardonForm();

 protected:
  void doAction(Bureaucrat const& executor) const;
};

#endif
