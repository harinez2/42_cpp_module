#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
 public:
  ShrubberyCreationForm();
  ShrubberyCreationForm(const std::string name);
  ShrubberyCreationForm(const ShrubberyCreationForm& obj);
  ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
  ~ShrubberyCreationForm();
};

#endif
