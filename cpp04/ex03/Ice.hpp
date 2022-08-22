#ifndef CPP04_ICE_H
#define CPP04_ICE_H

#include "AMateria.hpp"

class Ice : public AMateria {
public:
    Ice();
    Ice(const Ice &rsh);
    ~Ice();
    Ice &operator=(const Ice &obj);

    virtual AMateria	*clone( void ) const ;
    virtual void		use(ICharacter& target);
};

#endif