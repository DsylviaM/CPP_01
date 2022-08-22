#include "Dog.hpp"

Dog::Dog() {
    this->type = "dog";
    this->brain = new Brain();
    std::cout << "Dog constructed called" << std::endl;
}

Dog::Dog(const Dog &obj) : AAnimal(obj) {
    std::cout << "Copy constructor called by Dog" << std::endl;
    this->brain = new Brain();
    for (int i = 0; i < 100; i++)
        this->brain->setIdea(obj.brain->getIdea(i), i);
}

Dog &Dog::operator=(const Dog &rhs) {
    std::cout << "Copy assignment operator called Dog" << std::endl;
    this->type = rhs.getType();
    for (int i = 0; i < 100; i++)
        this->brain->setIdea(rhs.brain->getIdea(i), i);
    return *this;
}

Dog::~Dog() {
    delete brain;
    std::cout <<  "Destructor called by Dog" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "gav-gav" << std::endl;
}

std::string Dog::getIdeaForDog(int ideaCount) const {
    if (ideaCount < 0 || ideaCount >= 100)
    {
        std::cout << "Index not between 0 and " << 100 - 1 << " ";
        return "NULL";
    }
    else
        return brain->getIdea(ideaCount);
}

void Dog::setIdeaForDog(std::string ideas, int ideasCount) {
    if (ideasCount < 0 || ideasCount >= 100)
    {
        std::cout << "Index not between 0 and " << 100 - 1 << std::endl;
        return;
    }
    else
        brain->setIdea(ideas, ideasCount);
}

void Dog::printIdeaForDog() const {
    std::cout << this->getType() << " ";
    this->makeSound();
    for (int i = 0; i < 100; i++)
        std::cout << this->getIdeaForDog(i) << " ";
    std::cout << std::endl;
}

Brain *Dog::getBrain() const {
    return (this->brain);
}

AAnimal &Dog::operator=(const AAnimal &other) {
    std::cout << "Animal Assignement operator for Dog called" << std::endl;
    this->type = other.getType();
    *(this->brain) = *(other.getBrain());
    return *this;
}