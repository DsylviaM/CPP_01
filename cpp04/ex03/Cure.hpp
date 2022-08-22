#ifndef CPP04_CURE_H
#define CPP04_CURE_H

#include "AMateria.hpp"

class Cure : public AMateria {
public:
    Cure();
    Cure(const Cure &rsh);
    ~Cure();
    Cure & operator=(const Cure &obj);
    virtual AMateria *clone() const;
    virtual void use(ICharacter& target);
};


#endif
