#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
 public:
  Brain();
  Brain(const Brain& obj);
  Brain& operator=(const Brain& obj);
  virtual ~Brain();

  void setIdea(std::size_t idx, std::string idea);
  std::string& getIdea(std::size_t idx);

 protected:
  std::string ideas[100];
};

#endif
