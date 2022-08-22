#ifndef CPP04_AMATERIA_H
#define CPP04_AMATERIA_H

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
protected:
    std::string type;
public:
    AMateria(std::string const & _type);
    virtual ~AMateria();
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target) = 0;
};


#endif
