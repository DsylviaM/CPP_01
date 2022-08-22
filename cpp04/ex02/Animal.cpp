#include "Animal.hpp"

AAnimal::AAnimal() {
    std::cout << "Default AAnimal constructor called"  << std::endl;
}

AAnimal::AAnimal(std::string type) {
    this->type = type;
    std::cout << this->type << " was created" << std::endl;
}

AAnimal::AAnimal(const AAnimal &obj) {
    std::cout << "Copy constructor called " << std::endl;
    *this = obj;
    return ;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs) {
    std::cout <<  "Copy assignment operator called " << std::endl;
    this->type = rhs.getType();
    return *this;
}

AAnimal::~AAnimal() {
    std::cout << "Destructor called" << std::endl;
    return;
}

void AAnimal::makeSound() const {
    std::cout << "Animal sound" << std::endl;
}

const std::string AAnimal::getType() const {
    return this->type;
}

Brain *AAnimal::getBrain() const {
    return (0);
}
