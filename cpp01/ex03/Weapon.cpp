#include "Weapon.hpp"

void Weapon::setType(const std::string& new_type) {
	this->type = new_type;
}
const std::string& Weapon::getType() {
	return this->type;
}

Weapon::Weapon(const std::string new_type) {
	this->type = new_type;
}

/*Weapon::Weapon() {
	this->type = "";
}
*/

Weapon::~Weapon( void )
{
}
