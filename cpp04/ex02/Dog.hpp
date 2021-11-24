#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
 public:
  Dog();
  Dog(const Dog& obj);
  Dog& operator=(const Dog& obj);
  virtual ~Dog();

  virtual void makeSound() const;
  void setIdea(std::size_t idx, std::string idea);
  std::string& getIdea(std::size_t idx);

private:
  Brain* brain;
};

#endif

