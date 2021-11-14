#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>

class Intern {
 public:
  Intern();
  Intern(const Intern& obj);
  Intern& operator=(const Intern& obj);
  ~Intern();

  void makeForm(std::string name, std::string target);

 private:
  std::string name_;
};

#endif
