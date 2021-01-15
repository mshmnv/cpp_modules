/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 14:15:11 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/14 23:25:42 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

/*
** --------- Constructors and Destructor ---------
*/

Sorcerer::Sorcerer(std::string name, std::string title)
: _name(name), _title(title) {
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer( Sorcerer const & src) {
	*this = src;
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;

}

Sorcerer::~Sorcerer() {
	std::cout << this->_name << ", " << this->_title << ", is dead.";
	std::cout << " Consequences will never be the same!" << std::endl;

}

/*
** ------------------ Methods ------------------
*/

std::string	Sorcerer::getName( void ) const {
	return (this->_name);
}

std::string Sorcerer::getTitle( void ) const {
	return (this->_title);
}

void		Sorcerer::polymorph(Victim const & victim) const {
	victim.getPolymorphed();
}

/*
** ------------------ Overloads ------------------
*/

std::ostream & operator<<(std::ostream & out, Sorcerer const & object) {
	out << "I am " << object.getName() << ", " << object.getTitle() << ", ";
	out << "and I like ponies!" << std::endl;
	return (out);
}

Sorcerer & Sorcerer::operator=(Sorcerer const & src) {
	this->_name = src._name;
	this->_title = src._title;
	return(*this);
}
