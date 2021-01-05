/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 02:56:23 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/05 22:33:38 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact( void ) {

}

Contact::~Contact( void ) {

}

void	Contact::print_information( void ) {
	std::cout << this->_firstName << std::endl;
	std::cout << this->_lastName << std::endl;
	std::cout << this->_nickname << std::endl;
	std::cout << this->_login << std::endl;
	std::cout << this->_postalAddress << std::endl;
	std::cout << this->_emailAddress << std::endl;
	std::cout << this->_phonenumber << std::endl;
	std::cout << this->_birthday << std::endl;
	std::cout << this->_favMeal << std::endl;
	std::cout << this->_underwearColor << std::endl;
	std::cout << this->_darkestSecret << std::endl;
}

void	Contact::print_value( std::string value) {
	if (value.length() > 10)
		std::cout << value.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << value.substr(0, 10);
}

void	Contact::print_contact( int index ) {
		std::cout << std::setw(10) << index << "|";
		this->print_value(this->_firstName);
		std::cout << "|";
		this->print_value(this->_lastName);
		std::cout << "|";
		this->print_value(this->_nickname);
		std::cout << std::endl;
} 

void	Contact::set_firstName(std::string value) {
	this->_firstName = value;
}

void	Contact::set_lastName(std::string value) {
	this->_lastName = value;
}

void	Contact::set_nickname(std::string value) {
	this->_nickname = value;

}

void	Contact::set_login(std::string value) {
	this->_login = value;
}

void	Contact::set_postalAddress(std::string value) {
	this->_postalAddress = value;
}

void	Contact::set_emailAddress(std::string value) {
	this->_emailAddress = value;
}

void	Contact::set_phonenumber(std::string value) {
	this->_phonenumber = value;
}

void	Contact::set_birthday(std::string value) {
	this->_birthday = value;
}

void	Contact::set_favMeal(std::string value) {
	this->_favMeal = value;
}

void	Contact::set_underwearColor(std::string value) {
	this->_underwearColor = value;
}

void	Contact::set_darkestSecret(std::string value) {
	this->_darkestSecret = value;
}