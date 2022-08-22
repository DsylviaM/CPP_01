#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
    std::cout << "Default constructor for Cure called" << std::endl;
    return ;
}

Cure::Cure(const Cure &rsh) : AMateria("cure") {
    std::cout << "Copy constructor for Cure called" << std::endl;
    *this = rsh;
    return ;
}

Cure::~Cure() {
    std::cout << "Destructor for Cure called" << std::endl;
    return ;
}

Cure &Cure::operator=(const Cure &obj) {
    this->type = obj.type;
    std::cout << "Assignement operator for Cure called" << std::endl;
    return *this;
}

AMateria *Cure::clone() const {
    return (new Cure(*this));
}

void Cure::use(ICharacter &target) {
    std::cout << "\033[36m" << "* heals " << target.getName() << "`s wounds *" << "\033[0m" << std::endl;
}