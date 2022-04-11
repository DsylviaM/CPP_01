#include "HumanB.hpp"

void HumanB::attack() {
	if (weapon)
		std::cout << this->name << " attacks with his " << weapon->getType() << "\n";
	else
		std::cout << this->name << " has not weapon\n";
}

HumanB::HumanB(const std::string new_name) {
	this->name = new_name;
	this->weapon = nullptr;
}

void HumanB::setWeapon(Weapon& new_weapon) {
	weapon = &new_weapon;
}

HumanB::~HumanB( void )
{
}
