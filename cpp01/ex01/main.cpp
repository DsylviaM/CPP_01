#include "Zombie.hpp"

int main() {
	{
		Zombie zombie("{1} FIRST");
		zombie.announce();
	}
	Zombie zombie("[2] Second");
	{
		int n = 10;
		Zombie* alover = zombieHorde(n, "[3] Third");
		alover[0].announce();
		delete [] alover;
	}
	{
		int n = 5;
		Zombie* alover = zombieHorde(n, "[4] Fourth");
		for (int i = 0; i < n; ++i) {
			alover[i].announce();
		}
	}
}
