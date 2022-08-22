#include <iostream>
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat Mariy("Lady M",5);
	Intern max;

	Form *form1 = max.makeForm("Shrub", "Shrub");
	Form *form2 = max.makeForm("Robo", "Robo");
	Form *form3 = max.makeForm("Pardon", "Pardon");
	Form *form4 = max.makeForm("Form", "Try new");

	std::cout << std::endl;

	std::cout << *form1 << std::endl;
	std::cout << *form2 << std::endl;
	std::cout << *form3 << std::endl;

	std::cout << std::endl;

	try { Mariy.signForm(*form1); }
	catch(const std::exception& e) { std::cerr << e.what() << '\n'; }
	try { Mariy.signForm(*form2); }
	catch(const std::exception& e) { std::cerr << e.what() << '\n'; }
	try { Mariy.signForm(*form3); }
	catch(const std::exception& e) { std::cerr << e.what() << '\n'; }

	std::cout << std::endl;

	try { Mariy.executeForm(*form1); }
	catch(const std::exception& e){ std::cerr << e.what() << '\n'; }

	std::cout << std::endl << "=================" << std::endl << std::endl;

	try { Mariy.executeForm(*form2); }
	catch(const std::exception& e){ std::cerr << e.what() << '\n'; }

	std::cout << std::endl << "=================" << std::endl << std::endl;

	try { Mariy.executeForm(*form3); }
	catch(const std::exception& e){ std::cerr << e.what() << '\n'; }

	std::cout << std::endl << "=================" << std::endl << std::endl;

	if(!form4)
		std::cout << "Yup, it's null!" << std::endl;

	std::cout << std::endl;


	return 0;
}
