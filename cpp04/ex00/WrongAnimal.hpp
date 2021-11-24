#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal {
 public:
  WrongAnimal();
  WrongAnimal(const WrongAnimal& obj);
  WrongAnimal& operator=(const WrongAnimal& obj);
  ~WrongAnimal();

  std::string getType() const;
  void makeSound() const;

 protected:
  std::string type;
};

#endif
