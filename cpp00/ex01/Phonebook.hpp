#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "phonebook_main.hpp"

class Phonebook
{
	public:
		Phonebook();
		~Phonebook();
		void create_new_contact(int i,
			std::string f, std::string l, std::string n, std::string ph,
			std::string d);
		Contact get_contact(int i);
		std::string	get_first_name(int i);
		std::string	get_last_name(int i);
		std::string	get_nickname(int i);
		std::string	get_phone_number(int i);
		std::string	get_darkest_secret(int i);

	private:
		Contact phonebook[8];
};

#endif