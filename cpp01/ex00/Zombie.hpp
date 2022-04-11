#pragma once
#ifndef CPP01_ZOMBIE_HPP
#define CPP01_ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
	
public:
	
	Zombie(const std::string &name);
	const std::string& getName() const;
	void announce();
	~Zombie();
private:
	std::string name;
	void ZombieCall();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
