#include "WrongCat.hpp"

WrongCat::WrongCat() {
    type = "wrong cat";
    sound = "be be be";
    std::cout << "WrongCat constructed called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &Wkit) {
    std::cout << "Copy constructor called by WrongCat" << std::endl;
    *this = Wkit;
    return ;
}

WrongCat::WrongCat(std::string type, std::string sound) {
    this->type = type;
    this->sound = sound;
    std::cout << "Object of the class WrongCat " << this->type << " was created" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &Wkit) {
    this->type = Wkit.type;
    this->sound = Wkit.sound;
    return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << this->sound << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "Destructor called by WrongCat" << std::endl;
}