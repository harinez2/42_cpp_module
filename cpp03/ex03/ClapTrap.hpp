#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
protected:
	std::string			_name;
	int					_hit_points;
	int					_energy_points;
	int					_attack_damage;

	static const int	_hit_points_init = 10;
	static const int	_energy_points_init = 10;
	static const int	_attack_damage_init = 0;
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &obj);
	ClapTrap&			operator=(const ClapTrap& obj);
	~ClapTrap();

	std::string			getName(void) const;
	int					getHitPoints(void) const;
	int					getEnergyPoints(void) const;
	int					getAttackDamage(void) const;
	void				showStatus(void) const;

	void				attack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
};

#endif
