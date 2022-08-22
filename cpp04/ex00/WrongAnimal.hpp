#ifndef CPP04_WRONGANIMAL_H
#define CPP04_WRONGANIMAL_H

#include <iostream>

class WrongAnimal {
protected:
    std::string type;
    std::string sound;
public:
    WrongAnimal(std::string type);
    WrongAnimal();
    WrongAnimal(const WrongAnimal& Wanim);
    WrongAnimal& operator=(const WrongAnimal& Wanim);
    ~WrongAnimal();

    void	makeSound() const ;
    std::string getType() const;
};


#endif
