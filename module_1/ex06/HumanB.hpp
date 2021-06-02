#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(const std::string &name);
	~HumanB();

	void attack(void) const;
	void setWeapon(const Weapon &weapon);

private:
	std::string _name;
	Weapon *_weapon;
};

#endif