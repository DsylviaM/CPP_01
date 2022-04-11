#include "Zombie.hpp"

int main() {
	{
		Zombie zombie("[1] Zombie IVAN");
		zombie.announce();
	}
	Zombie zombie("[2] Zombie MARIA");
	{
		Zombie* alover = newZombie("[3] zombie JIM");
		delete alover;
	}
	randomChump("[4] NATA");
	{
		Zombie* alover = newZombie("[5] zombie BOB");
		alover->announce();
	}
}
