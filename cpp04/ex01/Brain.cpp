#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Default constructor for Brain called" << std::endl;
    return;
}

Brain::Brain(const Brain &obj) {
    std::cout << "Copy constructor for Brain called" << std::endl;
    *this = obj;
    return;
}

Brain &Brain::operator=(const Brain &rhs) {
    std::cout << "Assignement operator for Brain called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = rhs.ideas[i];
    return *this;
}

Brain::~Brain() {
    std::cout << "Destructor for Brain called"<< std::endl;
    return;
}

void Brain::setIdea(std::string ideas, int ideasCount) {
    if (ideasCount < 0 || ideasCount >= 100)
    {
        std::cout << "Index not between 0 and " << 100 - 1 << std::endl;
        return;
    }
    else
        this->ideas[ideasCount] = ideas;
}

std::string Brain::getIdea(int ideasCount) const {
    if (ideasCount < 0 || ideasCount >= 100)
    {
        std::cout << "Index not between 0 and " << 100 - 1 << " ";
        return "NULL";
    }
    else
        return ideas[ideasCount];
}

void Brain::printIdeas() const {
    for (int i = 0; i < 100; i++)
        std::cout  << ideas[i] << " ";
    std::cout << std::endl;
}