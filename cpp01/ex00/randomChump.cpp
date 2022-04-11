#include "Zombie.hpp"

void randomChump(std::string name) {
	Zombie newZombie(name);
	std::cout << "Zombie name: \"" << newZombie.getName() << "\" declaration\n";
}
