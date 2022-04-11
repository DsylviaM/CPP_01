#pragma once
#ifndef CPP01_ZOMBIE_HPP
#define CPP01_ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
	std::string name;
	void ZombieCall();
public:
	Zombie();
	Zombie(const std::string &name);
	const std::string& getName() const;
	void setName(const std::string& new_name);
	void announce();
	~Zombie();

};

Zombie* zombieHorde(int n, std::string name);

#endif
