#include "ClapTrap.hpp"

int main()
{
	ClapTrap vin_test("vin_test");
	std::string fit = "!Yammyyy!";
	vin_test.attack(fit);
	vin_test.beRepaired(10);
	vin_test.takeDamage(100);
	vin_test.attack(fit);
}