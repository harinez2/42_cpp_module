#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
 public:
  Animal();
  Animal(const Animal& obj);
  Animal& operator=(const Animal& obj);
  virtual ~Animal();

  std::string getType() const;
  virtual void makeSound() const;
  void setIdea(std::size_t idx, std::string idea);
  std::string& getIdea(std::size_t idx);

 protected:
  std::string type;
};

#endif
