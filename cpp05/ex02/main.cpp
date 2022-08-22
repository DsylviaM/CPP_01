#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	Bureaucrat Ivan("Super Ivan", 1);
	std::cout << Ivan << std::endl;
	Bureaucrat Mariy("Lady M", 25);
	std::cout << Mariy << std::endl;
	Bureaucrat Alexsandr("Alexsandr", 5);
	std::cout << Alexsandr << std::endl;
	Bureaucrat Mark("Mark", 145);
	std::cout << Mark << std::endl;
	Bureaucrat Eva("Eva", 137);
	std::cout << Eva << std::endl;

	std::cout << "---" << std::endl;

	Form *shrub = new ShrubberyCreationForm("home");
	std::cout << *shrub << std::endl;

	std::cout << "---" << std::endl;

	Form *pres = new PresidentialPardonForm("President");
	std::cout << *pres << std::endl;

	std::cout << "---" << std::endl;

	Form *robot = new RobotomyRequestForm("Robot");
	std::cout << *robot << std::endl;
	robot->beSigned(Ivan);
	robot->execute(Mariy);

	std::cout << "******************" << std::endl;

	try
	{
		Mariy.executeForm(*pres);
	}
	catch(std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "******************" << std::endl;

	try
	{
		RobotomyRequestForm robot = RobotomyRequestForm("Robot");
		std::cout << robot << std::endl;
		robot.execute(Ivan);
	}
	catch(std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "******************" << std::endl;

	try
	{
		PresidentialPardonForm pres = PresidentialPardonForm("President");
		std::cout << pres << std::endl;
		Ivan.signForm(pres);
		pres.execute(Mariy);
	}
	catch(std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "******************" << std::endl;

	try
	{
		PresidentialPardonForm pres = PresidentialPardonForm("President");
		std::cout << pres << std::endl;
		Mariy.signForm(pres);
		Alexsandr.executeForm(pres);
	}
	catch(std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "******************" << std::endl;

	try
	{
		ShrubberyCreationForm pres = ShrubberyCreationForm("home");
		std::cout << pres << std::endl;
		Mark.signForm(pres);
		Eva.executeForm(pres);
	}
	catch(std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	delete shrub;
	delete pres;
	delete robot;

	return (0);
}
