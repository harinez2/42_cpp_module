#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

template <typename T>
class MutantStack {
 public:
  void push(int n);
  int pop();
  int top();
  int size();
};

#endif
