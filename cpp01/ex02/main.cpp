#include <iostream>

int main() {
	std::string stroka = "HI THIS IS BRAIN";
	std::string* stringPTR = &stroka;
	std::string& stringREF = stroka;

	std::cout << &stroka << "\n";
	std::cout << stringPTR << "\n";
	std::cout << &stringREF << "\n";
	std::cout << "------------" << "\n";
	std::cout << stroka << "\n";
	std::cout << *stringPTR << "\n";
	std::cout << stringREF << "\n";
}
