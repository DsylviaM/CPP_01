#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->raw = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->raw = fixed.raw;
}

Fixed::Fixed(const int raw) : raw(raw << fbits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
	int cast_int = static_cast<int>(std::roundf(f * (1 << fbits)));
	this->raw = cast_int;
	std::cout << "Float constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->raw = fixed.raw;
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

float Fixed::toFloat() const
{
	return static_cast<float>(this->raw) / (1 << fbits);
}

int	Fixed::toInt() const
{
	return this->raw >> fbits;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream & operator<<(std::ostream & os, const Fixed & fix)
{
	os << fix.toFloat();
	return os;
}