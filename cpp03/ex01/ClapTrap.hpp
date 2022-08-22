#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
protected:
	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;
public:
	ClapTrap(std::string name);
	ClapTrap(std::string name, unsigned int hp, unsigned int ep, unsigned int ad);
	ClapTrap(const ClapTrap &instance);
	void attack(std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	~ClapTrap();
};



#endif