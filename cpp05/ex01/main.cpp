#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat Ivan("Ivan", 100);
	std::cout << Ivan << std::endl;

	Form form1("Forma soc_viplat", 100, 50);
	std::cout << form1 << std::endl;
	form1.beSigned(Ivan);
	std::cout << form1 << std::endl;

	std::cout << "**********" << std::endl;

	Form form2("Premiy", 99, 50);
	std::cout << form2 << std::endl;
	try
	{
		Ivan.signForm(form2);
	}
	catch(std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "**********" << std::endl;

	Form form3("bonusi", 101, 50);
	std::cout << form3 << std::endl;
	Ivan.signForm(form3);
	std::cout << form3 << std::endl;
	try
	{
		Ivan.signForm(form3);
	}
	catch(std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}
	//std::cout << form3 << std::endl;

	std::cout << "**********" << std::endl;

	try
	{
		Form formException("Viplati", 99, 50);
		std::cout << formException << std::endl;
		formException.beSigned(Ivan);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "**********" << std::endl;

	try
	{
		Form formException("Important Form", 1000, 50);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "**********" << std::endl;

	try
	{
		Form formException("Important Form", 0, 50);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "**********" << std::endl;

	try
	{
		Form formException("Important Form", 100, 1000);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "**********" << std::endl;

	try
	{
		Form formException("Important Form", 100, 0);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
