#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) {
    this->type = type;
    std::cout << "WrongAnimal " << this->type << " was created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &Wanim) {
    std::cout << "Copy WrongAnimal constructor called " << std::endl;
    *this = Wanim;
    return ;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &Wanim) {
    std::cout << "Copy WrongAnimal assignment operator called " << std::endl;
    this->type = Wanim.type;
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Destructor WrongAnimal called" << std::endl;
}

std::string WrongAnimal::getType() const {
    return this->type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WWWWWWRRRRRROOOONNNNGGGGGggg"
		<< std::endl;
}