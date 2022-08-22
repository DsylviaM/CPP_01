#ifndef CPP04_ANIMAL_H
#define CPP04_ANIMAL_H

#include <iostream>
#include "Brain.hpp"

class Animal {
protected:
    std::string type;
public:
    Animal(std::string type);
    Animal();
    Animal(const Animal& obj);
    Animal& operator=(const Animal& rhs);
    virtual ~Animal();

    virtual Brain *getBrain() const=0;
    virtual void makeSound() const;
    std::string getType() const;
};

#endif
