#ifndef CPP04_WRONGCAT_H
#define CPP04_WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
    WrongCat(std::string type, std::string sound);
    WrongCat();
    WrongCat(const WrongCat& Wkit);
    WrongCat& operator=(const WrongCat& Wkit);
    ~WrongCat();

    void	makeSound() const ;
};
    

#endif
