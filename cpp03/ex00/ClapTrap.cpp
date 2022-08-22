# include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Default constructor of ClapTrap was called" << std::endl;
	this->name = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &trap)
{
	std::cout << "Copy constructor of ClapTrap was called" << std::endl;
	*this = trap;
}

void ClapTrap::attack(std::string& target)
{
	if (this->hitPoints > 0)
	{
		std::cout << name << " attacks " << target << ", causing "
		<< attackDamage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > 0)
	{
		std::cout << name << " takes damage " << amount << std::endl;
		hitPoints -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints > 0)
	{
		std::cout << name << " repaired " << amount << std::endl;
		hitPoints += amount;
	}
}

ClapTrap &ClapTrap::operator=(const ClapTrap &trap)
{
	if (this == &trap)
		return *this;
	name = trap.name;
	hitPoints = trap.hitPoints;
	energyPoints = trap.energyPoints;
	attackDamage = trap.attackDamage;
	return *this;
}

ClapTrap::~ClapTrap(){}
