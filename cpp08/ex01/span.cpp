#include "span.hpp"

#include <iostream>
#include <exception>

Span::Span() : N(0) {}

Span::Span(unsigned int N) : N(N) {}

Span::Span(const Span& rhs): N(rhs.N) {
  *this = rhs;
}

Span& Span::operator=(const Span& rhs)  {
  if (this != &rhs) {
    setdata_ = rhs.setdata_;
  }
  return *this;
}

Span::~Span() {}

void Span::addNumber(int num) {
  if (setdata_.size() == N)
    throw std::out_of_range("Storing data capacity is full.");
  if (setdata_.find(num) != setdata_.end())
    throw std::out_of_range("Storing data is already in the dataset.");
  setdata_.insert(num);
}

int Span::shortestSpan() {
  return 0;
}

int Span::longestSpan() {
  return 0;
}

void Span::showData() {
  std::cout << "  | Max data num: " << N << std::endl;
  std::cout << "  | Current data count: " << setdata_.size() << std::endl;
  std::cout << "  | ";
  for (std::set<int>::iterator it = setdata_.begin(); it != setdata_.end(); ++it)
    std::cout << *it << " ";
  std::cout << std::endl;
}
