#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat Mariy("Mariy", 0);
		std::cout << Mariy;
	}
	catch(std::exception const &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat Mariy("Mariy", 1000);
		std::cout << Mariy << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat Mariy("Mariy", 1);
		std::cout << Mariy << std::endl;
		Mariy.incrementGrade();
		std::cout << Mariy << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout <<  "Error: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat Mariy("Mariy", 150);
		std::cout << Mariy << std::endl;
		Mariy.decrementGrade();
		std::cout << "Error: " << Mariy << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	Bureaucrat Ivan("Ivan", 100);
	std::cout << Ivan << std::endl;
	Ivan.incrementGrade();//-grade
	std::cout << Ivan << std::endl;
	Ivan.decrementGrade();//+grade
	std::cout << Ivan << std::endl;

	
	return (0);
}
