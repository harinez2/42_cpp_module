#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void) {

}

void identify(Base* p) {

}

void identify(Base& p) {

}

void test_generate_and_identify() {
  Base* b = generate();
  identify(b);
  identify(*b);
}

int main(void) {
  for (int i = 0; i < 5; ++i)
    test_generate_and_identify();
  return 0;
}
