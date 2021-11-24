#include "Brain.hpp"

#include <iostream>
#include <exception>

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

void Brain::setIdea(std::size_t idx, std::string idea) {
  if (idx < 0 || 100 <= idx)
    throw std::out_of_range("Index of ideas[] out of range.");
  ideas[idx] = idea;
}

std::string& Brain::getIdea(std::size_t idx) {
  if (idx < 0 || 100 <= idx)
    throw std::out_of_range("Index of ideas[] out of range.");
  return ideas[idx];
}
