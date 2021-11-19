#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>

Base* generate(void) {
  if (std::rand() % 3 == 0) {
    std::cout << "generated A instance." << std::endl;
    return new A();
  }
  else if (std::rand() % 3 == 1) {
    std::cout << "generated B instance." << std::endl;
    return new B;
  }
  else {
    std::cout << "generated C instance." << std::endl;
    return new C;
  }
  return NULL;
}

void identify(const Base* p) {
  (void)p;
}

void identify(const Base& p) {
  (void)p;
}

void test_generate_and_identify() {
  Base* b = generate();
  identify(b);
  identify(*b);
  delete b;
  std::cout << std::endl;
}

int main(void) {
  std::srand(static_cast<unsigned int>(time(NULL)));
  for (int i = 0; i < 5; ++i)
    test_generate_and_identify();
  return 0;
}
