#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
#include <iomanip>
# include <string>
# include "Contact.hpp"

class Phonebook {

public:
	Contact contact[8];
	int	numContacts;

	Phonebook(void);
	~Phonebook(void);

	void		add(void);
	void		search(void);

	private:

};

/*
** constructor
*/
Phonebook::Phonebook(void) {

	numContacts = 0;
	std::cout << "Constructor called" << std::endl;
	return ;
}

/*
** destructor
*/
Phonebook::~Phonebook(void) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

/*
** methods
*/
void		Phonebook::add(void) {
	this->numContacts += 1;

	std::cout << "Enter the First Name: ";
	std::cin >> this->contact[numContacts - 1].firstName;

	std::cout << "Enter the Last Name: ";
	std::cin >> this->contact[numContacts - 1].lastName;

	std::cout << "Enter the Nickname: ";
	std::cin >> this->contact[numContacts - 1].nickname;

	// std::cout << "Enter the Login: ";
	// std::cin >> this->contact[numContacts - 1].login;

	// std::cout << "Enter the Postal Address: ";
	// std::cin >> this->contact[numContacts - 1].postalAddress;

	// std::cout << "Enter the Email Address: ";
	// std::cin >> this->contact[numContacts - 1].emailAddress;

	// std::cout << "Enter the Phone Number: ";
	// std::cin >> this->contact[numContacts - 1].phonenumber;

	// std::cout << "Enter the Birthday Date: ";
	// std::cin >> this->contact[numContacts - 1].birthday;

	// std::cout << "Enter the Favourite Meal: ";
	// std::cin >> this->contact[numContacts - 1].favMeal;

	// std::cout << "Enter the Underwear Color: ";
	// std::cin >> this->contact[numContacts - 1].underwearColor;

	// std::cout << "Enter the Darkest Secret: ";
	// std::cin >> this->contact[numContacts - 1].darkestSecret;
}

void		Phonebook::search(void) {

	for (int i = 0; i < this->numContacts; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << contact[numContacts - 1].firstName.substr(0, 10) << "|";
		std::cout << std::setw(10) << contact[numContacts - 1].lastName.substr(0, 10) << "|";
		std::cout << std::setw(10) << contact[numContacts - 1].nickname.substr(0, 10) << std::endl;
	}
}

#endif