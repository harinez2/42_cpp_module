#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
protected:
	static const int	_hit_points_init = 100;
	static const int	_energy_points_init = 50;
	static const int	_attack_damage_init = 20;

public:
	ScavTrap(std::string name);
	~ScavTrap(void);

	void		guardGate(void);
};

#endif
