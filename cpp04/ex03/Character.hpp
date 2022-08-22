#ifndef CPP04_CARACTER_H
#define CPP04_CARACTER_H

#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter {
private:
    Character();
    static const int inventory = 4;
    std::string name;
    int equippedCount;
    AMateria *invent[Character::inventory];
public:
    Character(const std::string &_name);
    ~Character();
    Character &operator=(const Character &obj);
    Character(const Character &rsh);

    virtual std::string const &getName() const;
    virtual void				equip(AMateria* m);
    virtual void				unequip(int idx);
    virtual void				use(int idx, ICharacter& target);
    virtual void		printInventory( void ) const ;
};


#endif
