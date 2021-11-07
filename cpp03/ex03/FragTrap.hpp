#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
protected:
	static const int	_hit_points_init = 100;
	static const int	_energy_points_init = 100;
	static const int	_attack_damage_init = 30;
public:
	FragTrap(std::string name);
	~FragTrap(void);

	void		highFivesGuys(void);
};

#endif
