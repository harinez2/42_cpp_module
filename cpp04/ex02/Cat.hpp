#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
 public:
  Cat();
  Cat(const Cat& obj);
  Cat& operator=(const Cat& obj);
  virtual ~Cat();

  virtual void makeSound() const;

private:
  Brain* brain;
};

#endif
