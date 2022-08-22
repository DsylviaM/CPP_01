#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(std::string type) {
    this->type = type;
    std::cout << this->type << " was created" << std::endl;
}

Animal::Animal(const Animal &obj) {
    std::cout << "Copy constructor called " << std::endl;
    *this = obj;
    return ;
}

Animal &Animal::operator=(const Animal &rhs) {
    std::cout << "Copy assignment operator called " << std::endl;
    this->type = rhs.getType();
    return *this;
}

Animal::~Animal() {
    std::cout << "Destructor called" << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const {
    return this->type;
}

Brain *Animal::getBrain() const {
    return (0);
}
