#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
 public:
  Brain();
  Brain(const Brain& obj);
  Brain& operator=(const Brain& obj);
  virtual ~Brain();

  // void setIdea(int idx, std::string idea_txt);
  // std::string getIdea(int idx);

 protected:
  std::string ideas[100];
};

#endif
