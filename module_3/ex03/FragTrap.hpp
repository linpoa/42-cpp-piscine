#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &robot);
	~FragTrap();

	FragTrap &operator = (const FragTrap &robot);

	void rangedAttack(std::string const &target) const;
	void meleeAttack(std::string const &target) const;
	void vaulthunter_dot_exe(std::string const &target);

private:
	void set_up(void) const;
	void attack(std::string &type, const std::string &target) const;
};

#endif