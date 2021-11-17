#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
 public:
  Brain();
  Brain(const Brain& obj);
  Brain(const Brain* obj);
  Brain& operator=(const Brain& obj);
  virtual ~Brain();

 protected:
  std::string ideas[100];
};

#endif
