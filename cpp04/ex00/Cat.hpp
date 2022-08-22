#ifndef CPP04_CAT_H
#define CPP04_CAT_H

#include "Animal.hpp"

class Cat : public Animal {
public:
    Cat(std::string type, std::string sound);
    Cat();
    Cat(const Cat& Kitti);
    Cat& operator=(const Cat& Kitti);
    virtual ~Cat();

    virtual void makeSound() const;
};


#endif
