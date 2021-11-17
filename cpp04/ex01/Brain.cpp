#include "Brain.hpp"

#include <iostream>

Brain::Brain() {
  std::cout << "Brain construcotr called." << std::endl;
}

Brain::Brain(const Brain& obj) {
  std::cout << "Brain copy construcotr called." << std::endl;
  *this = obj;
}

Brain&	Brain::operator=(const Brain& obj) {
  std::cout << "Brain operator= called." << std::endl;
  if (this != &obj) {
    for (int i = 0; i < 100; i++)
      ideas[i] = obj.ideas[i];
  }
  return *this;
}

Brain::~Brain(void) {
  std::cout << "Brain destrucotr called." << std::endl;
}
