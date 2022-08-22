#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound(); 
    std::cout << " -------------------------" << std::endl;
	const WrongAnimal* CatWrong = new WrongCat();
    std::cout << CatWrong->getType() << std::endl;
	CatWrong->makeSound();//animal sound
   std::cout << " -------------------------" << std::endl;
    WrongCat WrCat;
    std::cout << WrCat.getType() << std::endl;
    WrCat.makeSound();
    std::cout << " *************************" << std::endl;
    Cat Cyt;
    std::cout << Cyt.getType() << std::endl;
    Cyt.makeSound();
    std::cout << " *************************" << std::endl;

    delete CatWrong;
    delete meta;
    delete j;
    delete i;

    return 0;
}