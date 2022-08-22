#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() {
    this->type = "cat";
    this->brain = new Brain();
    std::cout << "Cat constructed called" << std::endl;
}

Cat::Cat(const Cat &obj) {
    std::cout << "Copy constructor called by Cat" << std::endl;
    this->brain = new Brain();
    for (int i = 0; i < 100; i++)
        this->brain->setIdea(obj.brain->getIdea(i), i);
}

Cat &Cat::operator=(const Cat &rhs) {
    this->type = rhs.getType();
    *this->brain = *rhs.brain;
    std::cout << this->type << "Copy operator by Cat" << std::endl;
    return *this;
}

Cat::~Cat() {
    delete brain;
    std::cout << "Destructor called by Cat" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "miy miy miy" << std::endl;
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

