#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name_frag) : FragTrap::ClapTrap(name_frag)
{
	std::cout << "Default constructor of FragTrap was called" << std::endl;
	this->name = name_frag;
	this->hitPoints = 100;
	this->attackDamage = 30;
	this->energyPoints = 100;
}

FragTrap::FragTrap(const FragTrap &instance) : FragTrap::ClapTrap(instance)
{
	std::cout << "Copy constructor FragTrap  was called" << std::endl;
	*this = instance;
}

void FragTrap::highFiveGuys()
{
	if (hitPoints > 0)
		std::cout << "positive high fives request" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destroyed" << std::endl;
}