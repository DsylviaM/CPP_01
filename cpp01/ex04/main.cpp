#include <iostream>
#include "Replace.hpp"

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Bad arguments\n";
		return (1);
	}
	Replace replace(argv[1]);
	std::cout << "Count replace words = (" << replace.swap(argv[2], argv[3]) << ")\n";
	return (0);
}
