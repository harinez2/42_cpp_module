#include "Fixed.hpp"
#include <iostream>

int main( void ) {
	Fixed a(42.42f);
	Fixed b(11.22f);
	Fixed c(a);

	if (a > b)
		std::cout << "a is big" << std::endl;
	else
		std::cout << "b is big" << std::endl;
	if (a < b)
		std::cout << "b is big" << std::endl;
	else
		std::cout << "a is big" << std::endl;
	if (a >= b)
		std::cout << "a is big or equal" << std::endl;
	else
		std::cout << "b is big" << std::endl;
	if (a <= b)
		std::cout << "b is big or equal" << std::endl;
	else
		std::cout << "a is big" << std::endl;
	if (a >= c)
		std::cout << "a is big or equal" << std::endl;
	else
		std::cout << "b is big" << std::endl;
	if (a <= c)
		std::cout << "b is big or equal" << std::endl;
	else
		std::cout << "a is big" << std::endl;
	if (a == c)
		std::cout << "a is same as c" << std::endl;
	else
		std::cout << "a is not same as c" << std::endl;
	if (a != c)
		std::cout << "a is not same as c" << std::endl;
	else
		std::cout << "a is same as c" << std::endl;

	return 0;
}
