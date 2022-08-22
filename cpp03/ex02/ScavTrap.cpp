# include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name_scav) : ScavTrap::ClapTrap(name_scav)
{
	std::cout << "Default constructor of ScavTrap was called" << std::endl;
	this->name = name_scav;
	this->attackDamage = 20;
	this->hitPoints = 100;
	this->energyPoints = 50;
}

ScavTrap::ScavTrap(const ScavTrap &instance) : ScavTrap::ClapTrap(instance)
{
	std::cout << "Copy constructor ScavTrap  was called" << std::endl;
	*this = instance;
}

void ScavTrap::attack(std::string &target)
{
	if (this->hitPoints > 0)
	{
		std::cout << name << " attacks " << target << ", causing "
		<< attackDamage << " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	if (this->hitPoints > 0)
	{
		std::cout << name << "  is now in Gate keeper mode."<< std::endl;
	}
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destroyed" << std::endl;
}