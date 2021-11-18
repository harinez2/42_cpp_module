#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>

class Intern {
 public:
  Intern();
  Intern(const Intern& obj);
  Intern& operator=(const Intern& obj);
  ~Intern();

  Form* makeForm(const std::string& form_name, const std::string& target_form);

 private:
  int getFormCode(const std::string& form_name);
};

#endif
