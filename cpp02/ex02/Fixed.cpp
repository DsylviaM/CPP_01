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
	return this->raw;
}

void Fixed::setRawBits(const int raw)
{
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

Fixed Fixed::operator+(const Fixed& fi) const
{
	Fixed	new_fix;

	new_fix.setRawBits(this->raw + fi.getRawBits());
	return new_fix;
}

Fixed Fixed::operator-(const Fixed& fi) const
{
	Fixed	new_fix;

	new_fix.setRawBits(this->raw - fi.getRawBits());
	return new_fix;
}

Fixed Fixed::operator/(const Fixed& fi) const
{
	Fixed	new_fix(this->toFloat() / fi.toFloat());
	return new_fix;
}

Fixed Fixed::operator*(const Fixed& fi) const
{
	Fixed	new_fix(this->toFloat() * fi.toFloat());
	return new_fix;
}

Fixed Fixed::operator++(int i)
{
	Fixed	new_fix(*this);

	if (i)
		this->raw += i;
	else
		this->raw++;
	return new_fix;
}

Fixed Fixed::operator--(int i)
{
	Fixed	new_fix(*this);

	if (i)
		this->raw -= i;
	else
		this->raw--;
	return new_fix;
}

Fixed& Fixed::operator++(void )
{
	this->raw++;
	return *this;
}

Fixed& Fixed::operator--(void )
{
	this->raw--;
	return *this;
}

bool Fixed::operator>(const Fixed& fi)
{
	return this->raw > fi.getRawBits();
}

bool Fixed::operator<(const Fixed& fi)
{
	return this->raw < fi.getRawBits();
}

bool Fixed::operator>=(const Fixed& fi)
{
	return this->raw >= fi.getRawBits();
}

bool Fixed::operator<=(const Fixed& fi)
{
	return this->raw < fi.getRawBits();
}

bool Fixed::operator!=(const Fixed& fi)
{
	return this->raw != fi.getRawBits();
}

bool Fixed::operator==(const Fixed& fi)
{
	return this->raw == fi.getRawBits();
}

Fixed& Fixed::min(Fixed& fix1, Fixed& fix2)
{
	return fix1.getRawBits() < fix2.getRawBits() ? fix1 : fix2;
}

const Fixed& Fixed::min(const Fixed& fix1, const Fixed& fix2)
{
	return fix1.getRawBits() < fix2.getRawBits() ? fix1 : fix2;
}

Fixed& Fixed::max(Fixed& fix1, Fixed& fix2)
{
	return fix1.getRawBits() > fix2.getRawBits() ? fix1 : fix2;
}

const Fixed& Fixed::max(const Fixed& fix1, const Fixed& fix2)
{
	return fix1.getRawBits() > fix2.getRawBits() ? fix1 : fix2;
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