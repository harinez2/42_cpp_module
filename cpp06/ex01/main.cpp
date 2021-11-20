#include <iostream>
#include <stdint.h>

struct Data {
  int i;
  char c;
};

uintptr_t serialize(Data* ptr) {
  uintptr_t ip = reinterpret_cast<uintptr_t>(ptr);
  std::cout << "serialized uintptr_t : " << std::hex << ip << std::endl;
  std::cout << std::endl; 
  return ip;
}

Data* deserialize(uintptr_t raw) {
  return reinterpret_cast<Data*>(raw);
}

void serialize_deserialize(Data d) {
  std::cout << "d.i       : " << std::dec << d.i << std::endl; 
  std::cout << "d.c       : " << d.c << std::endl; 
  std::cout << "d address : " << &d << std::endl; 
  std::cout << std::endl; 

  uintptr_t raw = serialize(&d);
  Data* deserialized = deserialize(raw);

  std::cout << "deserialized.i       : " << std::dec << deserialized->i << std::endl; 
  std::cout << "deserialized.c       : " << deserialized->c << std::endl; 
  std::cout << "deserialized address : " << deserialized << std::endl; 
  std::cout << std::endl; 
}

int main(void) {
  Data d;
  d.i = 42;
  d.c = 'a';
  serialize_deserialize(d);
  return 0;
}
