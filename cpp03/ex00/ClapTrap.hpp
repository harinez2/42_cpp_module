#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {
 public:
  ClapTrap(std::string name);
  ClapTrap(const ClapTrap& obj);
  ClapTrap& operator=(const ClapTrap& obj);
  virtual ~ClapTrap();

  std::string getName(void) const;
  int getHitPoints(void) const;
  int getEnergyPoints(void) const;
  int getAttackDamage(void) const;
  void showStatus(void) const;

  void attack(std::string const& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

 private:
  std::string name_;
  int hit_points_;
  int energy_points_;
  int attack_damage_;

  static const int kHitPointsInitValue_;
  static const int kEnergyPointsInitValue_;
  static const int kAttackDamageInitValue_;
};

#endif
