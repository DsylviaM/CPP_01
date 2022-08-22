#include "AMateria.hpp"

AMateria::AMateria(const std::string &_type) {
    this->type = _type;
    std::cout << "String constructor for AMateria called" << std::endl;
    return;
}

const std::string &AMateria::getType() const {
    return this->type;
}

AMateria::~AMateria() {
    std::cout << "Destructor for AMateria called" << std::endl;
}