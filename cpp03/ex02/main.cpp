#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	/*ClapTrap Son("Son");
	std::string attak = "*** Son ***";
	Son.attack(attak);

	ScavTrap Dother("Dother");
	std::string attak1 = "*** Dother ***";
	Dother.attack(attak1);
	*/

	FragTrap Big("Big boy");
	std::string attak2 = "*** Big Boy ***";
	Big.highFiveGuys();
	Big.attack(attak2);
	Big.beRepaired(12);
}