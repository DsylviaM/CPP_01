#include "ScavTrap.hpp"

int main()
{
	std::string hit = "HIT";
	ScavTrap SonTrap("*** Son ***");
	SonTrap.guardGate();
	SonTrap.attack(hit);
}