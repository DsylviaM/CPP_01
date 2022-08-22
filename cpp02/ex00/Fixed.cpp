#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->raw = 0;
}

Fixed::Fixed(const Fixed &raw)
{
	std::cout << "Copy constructor called" << std::endl;
	this->raw = raw.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &raw)
{
	std::cout << "Assignation operator called" << std::endl;
	this->raw = raw.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->raw;
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->raw = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}