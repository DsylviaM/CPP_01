#ifndef CPP04_CAT_H
#define CPP04_CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
    Brain *brain;
public:
    Cat();
    Cat(const Cat& obj);
    Cat& operator=(const Cat& rhs);
    ~Cat();
    void makeSound() const;
    std::string getIdeaForCat(int ideasCount) const;
    void setIdeaForCat(std::string ideas, int ideasCount);
    void printForCatIdeas() const;
    Brain *getBrain() const;
};


#endif
