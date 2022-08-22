#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
    std::cout << "Default constructor for Ice called" << std::endl;
    return ;
}

Ice::Ice(const Ice &rsh) : AMateria("ice") {
    *this = rsh;
    std::cout << "Copy constructor for Ice called" << std::endl;
    return ;
}

Ice::~Ice() {
    std::cout << "Destructor gor Ice called" << std::endl;
}

Ice &Ice::operator=(const Ice &obj) {
    this->type = obj.type;
    std::cout << "Assignement operator for Ice called" << std::endl;
    return *this;
}

AMateria *Ice::clone() const {
    return (new Ice(*this));
}

void Ice::use(ICharacter &target) {
    std::cout << "\033[35m" << "* shoots an ice bolt at " << target.getName() << " *" << "\033[0m" << std::endl;
}