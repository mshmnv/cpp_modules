/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 02:56:14 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/06 02:17:53 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

Phonebook::Phonebook( void ) {
	this->numContacts = 0;
	std::cout << "Your red Phonebook is opened" << std::endl;
}

Phonebook::~Phonebook( void ) {
	std::cout << "Your red Phonebook is closed" << std::endl;
}

void		Phonebook::add(void) {

	std::string value;
	if (this->numContacts == 8) {
		std::cout << "The Phonebook is full" << std::endl;
		return ;
	}	
	this->numContacts += 1;

	std::cout << "Enter the First Name: ";
	std::cin >> value;
	this->contact[numContacts - 1].set_firstName( value );

	std::cout << "Enter the Last Name: ";
	std::cin >> value;
	this->contact[numContacts - 1].set_lastName( value );

	std::cout << "Enter the Nickname: ";
	std::cin >> value;
	this->contact[numContacts - 1].set_nickname( value );

	std::cout << "Enter the Login: ";
	std::cin >> value;
	this->contact[numContacts - 1].set_login( value );

	std::cout << "Enter the Postal Address: ";
	std::cin >> value;
	this->contact[numContacts - 1].set_postalAddress( value );

	std::cout << "Enter the Email Address: ";
	std::cin >> value;
	this->contact[numContacts - 1].set_emailAddress( value );

	std::cout << "Enter the Phone Number: ";
	std::cin >> value;
	this->contact[numContacts - 1].set_phonenumber( value );

	std::cout << "Enter the Birthday Date: ";
	std::cin >> value;
	this->contact[numContacts - 1].set_birthday( value );

	std::cout << "Enter the Favourite Meal: ";
	std::cin >> value;
	this->contact[numContacts - 1].set_favMeal( value );

	std::cout << "Enter the Underwear Color: ";
	std::cin >> value;
	this->contact[numContacts - 1].set_underwearColor( value );

	std::cout << "Enter the Darkest Secret: ";
	std::cin >> value;
	this->contact[numContacts - 1].set_darkestSecret( value );
}

void		Phonebook::search( void ) {

	int	index;

	if (this->numContacts == 0) {
		std::cout << "No contacts to search for. Try ADD first :)" << std::endl;
		return ;
	}
	for (int i = 0; i < this->numContacts; i++)
		contact[i].print_contact(i + 1);
	std::cout << "What contact did you search for?\nEnter its index (or 0 to Exit): ";
	while (21) {
		std::cin >> index;
		if (index == 0)
			break ;
		if (index > 0 && index <= this->numContacts) {
			contact[index - 1].print_information();
			break ;
		}
		std::cout << "Try once more :)\nEnter the number from " << "1" << " till " << this->numContacts << ": ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}
