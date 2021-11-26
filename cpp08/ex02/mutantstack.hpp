#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
 public:
  typedef typename std::stack<T>::container_type::iterator iterator;

  MutantStack() {}
  MutantStack(const MutantStack& rhs) { *this = rhs; }
  MutantStack& operator=(const MutantStack& rhs) {
    if (this != &rhs) {
    }
    return *this;
  }
  ~MutantStack() {}

  iterator begin() { return this->c.begin(); }
  iterator end() { return this->c.end(); }
};

#endif
