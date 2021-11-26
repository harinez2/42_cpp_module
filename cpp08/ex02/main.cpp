#include "mutantstack.hpp"

#include <iostream>

void test_subject() {
  std::cout << "<test_subject>" << std::endl;
  MutantStack<int> mstack;

  mstack.push(5);
  mstack.push(17);

  std::cout << mstack.top() << std::endl;

  mstack.pop();

  std::cout << mstack.size() << std::endl;

  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  //[...]
  mstack.push(0);

  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();

  ++it;
  --it;

  while (it != ite)
  {
    std::cout << *it << std::endl;
    ++it;
  }
  std::stack<int> s(mstack);
  std::cout << std::endl;
}

void test_iterator(MutantStack<int>& mstack) {
  std::cout << "<test_iterator>" << std::endl;  
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
  }
  std::cout << std::endl;
}

void test_constiterator(MutantStack<int>& mstack) {
  std::cout << "<test_constiterator>" << std::endl;  
  MutantStack<int>::const_iterator it = mstack.begin();
  MutantStack<int>::const_iterator ite = mstack.end();
  while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
  }
  std::cout << std::endl;
}

void test_riterator(MutantStack<int>& mstack) {
  std::cout << "<test_riterator>" << std::endl;  
  MutantStack<int>::reverse_iterator it = mstack.rbegin();
  MutantStack<int>::reverse_iterator ite = mstack.rend();
  while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
  }
  std::cout << std::endl;
}

void test_constriterator(MutantStack<int>& mstack) {
  std::cout << "<test_constriterator>" << std::endl;  
  MutantStack<int>::const_reverse_iterator it = mstack.rbegin();
  MutantStack<int>::const_reverse_iterator ite = mstack.rend();
  while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
  }
  std::cout << std::endl;
}

int main() {
  test_subject();
  
  MutantStack<int> mstack;
  mstack.push(3);
  mstack.push(17);
  mstack.push(5);
  mstack.push(26);
  test_iterator(mstack);
  test_constiterator(mstack);
  test_riterator(mstack);
  test_constriterator(mstack);
  return 0;
}
