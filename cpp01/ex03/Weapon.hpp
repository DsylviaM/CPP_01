#pragma once
#ifndef CPP01_WEAPON_HPP
#define CPP01_WEAPON_HPP

#include <string>
#include <iostream>

class Weapon {
	std::string type;
public:
	//Weapon();
	Weapon(const std::string new_type);
	void setType(const std::string& new_type);
	const std::string& getType();
	~Weapon();
};

#endif
