#ifndef WEEK_2_HUMANA_HPP
#define WEEK_2_HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
private :
        std::string name;
        Weapon& weapon;
public:
	HumanA( std::string name, Weapon& new_weapon);
	void attack();
	~HumanA();
};

#endif
