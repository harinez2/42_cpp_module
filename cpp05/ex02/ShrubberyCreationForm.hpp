#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

#include <string>

class ShrubberyCreationForm : public Form {
 public:
  ShrubberyCreationForm();
  ShrubberyCreationForm(const std::string name);
  ShrubberyCreationForm(const ShrubberyCreationForm& obj);
  ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
  ~ShrubberyCreationForm();

 protected:
  void doAction(Bureaucrat const& executor) const;

 private:
  void output_file(const std::string& file_name, const std::string& output_text) const;
};

#endif
