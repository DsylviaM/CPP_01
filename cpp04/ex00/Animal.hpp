#ifndef CPP04_ANIMAL_H
#define CPP04_ANIMAL_H

#include <iostream>

class Animal {
protected:
    std::string type;
    std::string sound;
public:
    Animal(std::string type);
    Animal();
    Animal(const Animal& Anim);
    Animal& operator=(const Animal& Anim);
    virtual ~Animal();

    virtual void makeSound() const;
    std::string getType() const;
};

#endif
