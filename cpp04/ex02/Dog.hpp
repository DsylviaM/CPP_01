#ifndef CPP04_DOG_H
#define CPP04_DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
private:
    Brain *brain;
public:
    Dog();
    Dog(const Dog& obj);
    Dog& operator=(const Dog& rhs);
    virtual AAnimal	&operator=( const AAnimal &other );
    ~Dog();

    virtual void makeSound() const;
    std::string getIdeaForDog(int ideasCount) const;
    void setIdeaForDog(std::string idea, int ideasCount);
    void printIdeaForDog() const;
    virtual Brain *getBrain() const;
};


#endif
