#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	std::string names[3];
	Form *(Intern::*functions[3])(std::string target);

	Form *makeShrub(std::string target);
	Form *makeRob(std::string target);
	Form *makePar(std::string target);

public:

	Intern();
	Intern(Intern const &);
	~Intern();

	Form *makeForm(std::string form, std::string target);

	Intern & operator=(Intern const &);

};

typedef Form *(Intern::*maker)(std::string target);

#endif
