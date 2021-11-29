#include "span.hpp"

#include <iostream>
#include <exception>
#include <limits>

Span::Span() : N(0) {}

Span::Span(unsigned int N) : N(N) {}

Span::Span(const Span& rhs) : N(rhs.N) {
  *this = rhs;
}

Span& Span::operator=(const Span& rhs)  {
  if (this != &rhs) {
    if (N < rhs.setdata_.size())
      throw std::out_of_range("Copy target size is smaller than copy from.");
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

long Span::shortestSpan() {
  if (setdata_.size() < 2)
    throw std::range_error("Storing num count is less than 2.");

  long shortest = std::numeric_limits<long>::max();
  std::set<int>::iterator it = setdata_.begin();
  for (std::set<int>::iterator it_nxt = it; ; ++it) {
    if (++it_nxt == setdata_.end())
      break;
    long diff = *it_nxt - *it;
    if (diff < shortest)
      shortest = diff;
  }
  return shortest;
}

long Span::longestSpan() {
  if (setdata_.size() < 2)
    throw std::range_error("Storing num count is less than 2.");

  std::set<int>::iterator it = setdata_.begin();
  std::set<int>::iterator it_end = setdata_.end();
  --it_end;
  return *it_end - *it;
}

void Span::showData() {
  std::cout << "  | Max data num: " << N << std::endl;
  std::cout << "  | Current data count: " << setdata_.size() << std::endl;
  std::cout << "  | ";
  for (std::set<int>::iterator it = setdata_.begin(); it != setdata_.end(); ++it)
    std::cout << *it << " ";
  std::cout << std::endl;
}
