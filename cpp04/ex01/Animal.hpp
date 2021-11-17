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

 protected:
  std::string type;
};

#endif
