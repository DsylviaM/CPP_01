#include "Cat.hpp"

Cat::Cat() {
    type = "cat";
    sound = "miy miy miy";
    std::cout << "Cat constructed called" << std::endl;
}

Cat::Cat(std::string type, std::string sound) {
    this->type = type;
    this->sound = sound;
    std::cout << "Object of the class Cat " << this->type << " was created" << std::endl;
}

Cat::Cat(const Cat &Kitti) {
    std::cout << "Copy constructor called by Cat" << std::endl;
    *this = Kitti;
    return ;
}

Cat &Cat::operator=(const Cat &Kitti) {
    this->type = Kitti.type;
    this->sound = Kitti.sound;
    return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Mey mey mey"
		<< std::endl;
}

Cat::~Cat() {
    std::cout << "Destructor called by Cat" << std::endl;
}