#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

#include <iostream>

void test_subject() {
	{
		Weapon club = Weapon("crude spiked club");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");

		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}

void test_weapon() {
	Weapon w1;
	std::cout << w1.getType() << std::endl;

	Weapon w2 = Weapon();
	std::cout << w2.getType() << std::endl;

	Weapon w3 = Weapon("weapon");
	std::cout << w3.getType() << std::endl;

	Weapon w4 = Weapon(w3);
	std::cout << w4.getType() << std::endl;
}

void test_humanb() {
	Weapon club = Weapon("weapon");

	HumanB jim("Jim");
	jim.attack();
	jim.setWeapon(club);
	jim.attack();
	club.setType("new weapon");
	jim.attack();
}

int	main()
{
	test_subject();
	std::cout << "--------------------" << std::endl;
	test_weapon();
	std::cout << "--------------------" << std::endl;
	test_humanb();
	return 0;
}
