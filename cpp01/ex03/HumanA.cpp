#include "HumanA.hpp"

void HumanA::attack() {
	std::cout << this->name << " attacks with his " << weapon.getType() << "\n";
}

HumanA::HumanA(std::string name, Weapon& new_weapon)
: name(name), weapon(new_weapon) {}

HumanA::~HumanA( void )
{
}
