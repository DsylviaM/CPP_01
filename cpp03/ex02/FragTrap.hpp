#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	
public:
	FragTrap(std::string name);
	FragTrap(const FragTrap &instance);
	void highFiveGuys();
	~FragTrap();
};



#endif