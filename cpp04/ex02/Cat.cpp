#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() {
    this->type = "cat";
    this->brain = new Brain();
    std::cout <<  "Cat constructed called"  << std::endl;
}

Cat::Cat(const Cat &obj) : AAnimal(obj){
    std::cout << "Copy constructor called by Cat" << std::endl;
    this->brain = new Brain();
    for (int i = 0; i < 100; i++)
        this->brain->setIdea(obj.brain->getIdea(i), i);
}

Cat &Cat::operator=(const Cat &rhs) {
    this->type = rhs.getType();
    for (int i = 0; i < 100; i++)
        this->brain->setIdea(rhs.brain->getIdea(i), i);
    return *this;
}

Cat::~Cat() {
    delete brain;
    std::cout << "Destructor called by Cat"  << std::endl;
}

void Cat::makeSound() const {
    std::cout << "meeeeyyyy" << std::endl;
}

std::string Cat::getIdeaForCat(int ideaCount) const {
    if (ideaCount < 0 || ideaCount >= 100)
    {
        std::cout << "Index not between 0 and " << 100 - 1 << " ";
        return "NULL";
    }
    else
        return brain->getIdea(ideaCount);
}

void Cat::setIdeaForCat(std::string ideas, int ideaCount) {
    if (ideaCount < 0 || ideaCount >= 100)
    {
        std::cout << "Index not between 0 and " << 100 - 1 << std::endl;
        return;
    }
    else
        brain->setIdea(ideas, ideaCount);
}

void Cat::printForCatIdeas() const {
    std::cout << this->getType() << " ";
    this->makeSound();
    for (int i = 0; i < 100; i++)
        std::cout << this->getIdeaForCat(i) << " ";
    std::cout << std::endl;
}

Brain *Cat::getBrain() const {
    return (this->brain);
}

AAnimal &Cat::operator=(const AAnimal &other) {
    std::cout << "Animal Assignement operator for Cat called" << std::endl;
    this->type = other.getType();
    *(this->brain) = *(other.getBrain());
    return *this;
}