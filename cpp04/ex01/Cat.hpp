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
  void setIdea(std::size_t idx, std::string idea);
  std::string& getIdea(std::size_t idx);

private:
  Brain* brain;
};

#endif
