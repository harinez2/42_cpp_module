#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {
 public:
  ClapTrap(std::string name);
  ClapTrap(const ClapTrap& obj);
  ClapTrap& operator=(const ClapTrap& obj);
  ~ClapTrap();

  std::string getName(void) const;
  int getHitPoints(void) const;
  int getEnergyPoints(void) const;
  int getAttackDamage(void) const;
  void showStatus(void) const;

  void attack(std::string const &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

 protected:
  std::string name_;
  int _hit_points;
  int _energy_points;
  int _attack_damage;

  static const int kHitPointsInitValue = 10;
  static const int kEnergyPointsInitValue = 10;
  static const int kAttackDamageInitValue = 0;
};

#endif
