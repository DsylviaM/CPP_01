#ifndef CPP04_CAT_H
#define CPP04_CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
private:
    Brain *brain;
public:
    Cat();
    Cat(const Cat& obj);
    Cat& operator=(const Cat& rhs);
    virtual AAnimal	&operator=( const AAnimal &other );
    ~Cat();
    virtual void makeSound() const;
    std::string getIdeaForCat(int ideasCount) const;
    void setIdeaForCat(std::string ideas, int ideasCount);
    void printForCatIdeas() const;
    virtual Brain *getBrain() const;
};


#endif
