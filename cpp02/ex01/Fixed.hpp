#ifndef CPP02_FIXED_HPP
#define CPP02_FIXED_HPP
#include <iostream>

class Fixed
{
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed&);
	Fixed(const float f);
	Fixed(const int i);
	Fixed& operator=(const Fixed&);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
private:
	static const int	fbits = 8;
	int 				raw;
};

std::ostream & operator<<(std::ostream & os, const Fixed & fix);


#endif
