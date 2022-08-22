#include "Character.hpp"

Character::Character() : name(""), equippedCount(0) {
    for (int i = 0; i < Character::inventory; i++)
        this->invent[i] = NULL;
    std::cout << "Default constructor for Character called" << std::endl;
    return;
}

Character::Character(const std::string &_name) {
    *this = Character();
    this->name = _name;
    std::cout << "Name constructor for Character called" << std::endl;
    return ;
}

Character::Character(const Character &rsh) {
    *this = rsh;
    std::cout << "Copy constructor for Character called" << std::endl;
    return ;
}

Character::~Character() {
    std::cout << "Destructor for Character called" << std::endl;
    return ;
}

Character &Character::operator=(const Character &obj) {
    this->equippedCount = 0;
    for (int i = 0; i < Character::inventory; i++)
    {
        if (this->invent[i])
            delete this->invent[i];
        this->invent[i] = obj.invent[i];
        if (obj.invent[i])
            this->equippedCount++;
    }
    this->name = obj.getName();
    std::cout << "Assignement operator for Character called" << std::endl;
    return *this;
}

const std::string &Character::getName() const {
    return this->name;
}

void Character::equip(AMateria *m) {
    if (this->equippedCount < Character::inventory)
    {
        this->invent[this->equippedCount] = m;
        this->equippedCount++;
        std::cout << "Equipped a " << m->getType() << std::endl;
    }
    else
        std::cout << "Couldn`t equip a " << m->getType() << ", no more space" << std::endl;
}

void Character::unequip(int idx) {
    int i;

    i = idx + 1;
    while (i < Character::inventory && this->invent[i])
    {
        this->invent[i - 1] = this->invent[i];
        i++;
    }
    this->invent[i] = NULL;
}

void Character::use(int idx, ICharacter &target) {
    this->invent[idx]->use(target);
    this->unequip(idx);
}

void Character::printInventory() const {
    for (int i = 0; i < Character::inventory; i++)
    {
        if (this->invent[i])
            std::cout << i << ":" << this->invent[i] << std::endl;
        else
            std::cout << i << ": Empty" << std::endl;
    }
}