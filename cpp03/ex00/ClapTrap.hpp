#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
private:
	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &trap);
	ClapTrap& operator= (const ClapTrap &trap);
	~ClapTrap();
	void attack(std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
};



#endif