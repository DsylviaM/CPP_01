#ifndef WEEK_2_HUMANB_HPP
#define WEEK_2_HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private :
        std::string name;
        Weapon *weapon;
public:
	HumanB(const std::string new_name);
	void attack();
	void setWeapon(Weapon& new_weapon);
	~HumanB();
};
#endif
