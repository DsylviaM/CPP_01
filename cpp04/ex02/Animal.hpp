#ifndef CPP04_ANIMAL_H
#define CPP04_ANIMAL_H

#include <iostream>
#include "Brain.hpp"

class AAnimal {
protected:
    std::string type;
public:
    AAnimal(std::string type);
    AAnimal();
    AAnimal(const AAnimal& obj);
    virtual AAnimal& operator=(const AAnimal& rhs)=0;
    virtual ~AAnimal();

    virtual Brain *getBrain() const=0;
    virtual void makeSound() const=0;
    const std::string getType() const;
};

#endif
