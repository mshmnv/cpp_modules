/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 02:56:14 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/05 12:35:40 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook( void ) {
	this->numContacts = 0;
}

Phonebook::~Phonebook( void ) {

}

void		Phonebook::add(void) {

	std::string value;
	 
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

	// std::cout << "Enter the Postal Address: ";
	// std::cin >> value;
	// this->contact[numContacts - 1].set_postalAddress( value );

	// std::cout << "Enter the Email Address: ";
	// std::cin >> value;
	// this->contact[numContacts - 1].set_emailAddress( value );

	// std::cout << "Enter the Phone Number: ";
	// std::cin >> value;
	// this->contact[numContacts - 1].set_phonenumber( value );

	// std::cout << "Enter the Birthday Date: ";
	// std::cin >> value;
	// this->contact[numContacts - 1].set_birthday( value );

	// std::cout << "Enter the Favourite Meal: ";
	// std::cin >> value;
	// this->contact[numContacts - 1].set_favMeal( value );

	// std::cout << "Enter the Underwear Color: ";
	// std::cin >> value;
	// this->contact[numContacts - 1].set_underwearColor( value );

	// std::cout << "Enter the Darkest Secret: ";
	// std::cin >> value;
	// this->contact[numContacts - 1].set_darkestSecret( value );
}

void		Phonebook::search( void ) {

	int	index;

	if (this->numContacts == 0) {
		std::cout << "No contacts to show. Try ADD first :)" << std::endl;
		return ;
	}
	for (int i = 0; i < this->numContacts; i++)
		contact[i].print_contact(i + 1);
	std::cout << "What contact did you search for? Enter its index: ";
	while (21) {
		std::cin >> index;
	
		if (index > 0 && index <= numContacts) {
			contact[index - 1].print_information();
			break ;
		}
		else
			std::cout << "Try once more :)\nEnter the number from " << "1" << " till " << numContacts << ":";

	}
}
