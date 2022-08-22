#ifndef CPP04_DOG_H
#define CPP04_DOG_H

#include "Animal.hpp"

class Dog : public Animal {
public:
    Dog(std::string type, std::string sound);
    Dog();
    Dog(const Dog& Pappy);
    Dog& operator=(const Dog& Pappy);
    virtual ~Dog();

    virtual void makeSound() const;
};


#endif
