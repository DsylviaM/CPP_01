#include "Dog.hpp"

Dog::Dog() {
    type = "dog";
    sound = "gav gav gav";
    std::cout << "Dog constructed called" << std::endl;
}

Dog::Dog(std::string type, std::string sound) {
    this->type = type;
    this->sound = sound;
    std::cout << "Object of the class Dog " << this->type << " was created" << std::endl;
}

Dog::Dog(const Dog &Pappy) {
    std::cout << "Copy constructor called by Dog" << std::endl;
    *this = Pappy;
    return ;
}

void	Dog::makeSound() const
{
	std::cout << "Wouf!" << std::endl;
}

Dog &Dog::operator=(const Dog &Pappy) {
    this->type = Pappy.type;
    this->sound = Pappy.sound;
    return *this;
}

Dog::~Dog() {
    std::cout << "Destructor called by Dog" << std::endl;
}