#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    Animal	*animals[6];

    for (int i = 0; i < 6; i++)
    {
        if (i < 6 / 2)
        {
            animals[i] = new Dog();
            animals[i]->makeSound();
            std::cout << "Dog number " << i << " was created" << std::endl;
        }
        else
        {
            animals[i] = new Cat();
            animals[i]->makeSound();
            std::cout << "Cat number " << i << " was created" << std::endl;
        }
        std::cout << animals[i]->getType() << "\033[31m" << " #" << i << "\033[0m" << std::endl;
    }

    std::cout << "***** Ideas to animals *****" << std::endl;
    std::cout <<  "#1"  << std::endl;
    std::cout << animals[1]->getType() << std::endl;
    animals[1]->getBrain()->setIdea("I want to run!", 2);
    animals[1]->getBrain()->printIdeas();

    std::cout << "#2"  << std::endl;
    std::cout << animals[2]->getType() << std::endl;
    animals[2]->getBrain()->setIdea("Time to eat!", 2);
    animals[2]->getBrain()->printIdeas();

    std::cout << "#3"  << std::endl;
    std::cout << animals[4]->getType() << std::endl;
    animals[4]->getBrain()->setIdea(" I want play ", 2);
    animals[4]->getBrain()->printIdeas();

    std::cout << "Default type for animals[6]" << std::endl;
    std::cout << animals[5]->getType() << std::endl;

   
    std::cout << "******** NEW ideas for animals[4]***********" << std::endl;
     std::cout << animals[4]->getType() << std::endl;
    animals[4]->getBrain()->printIdeas();
     *(animals[4]->getBrain()) = *(animals[1]->getBrain());
    animals[4]->getBrain()->printIdeas();

    std::cout << "******************************" << std::endl;
    Cat Mariy;
    *(Mariy.getBrain()) = *(animals[4]->getBrain());
    Mariy.getBrain()->printIdeas();
    std::cout << "******************************" << std::endl;

    for (int i = 0; i < 6; i++)
        delete animals[i];
    return 0;
}