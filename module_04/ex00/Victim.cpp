/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 21:33:43 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/14 22:35:07 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

/*
** --------- Constructors and Destructor ---------
*/

Victim::Victim( std::string name) : _name(name) {
	std::cout << "Some random victim called "<< this->_name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const & src) {
	*this = src;
}


Victim::~Victim( void ) {
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

/*
** ------------------ Methods ------------------
*/

std::string	Victim::getName( void ) const {
	return (this->_name);
}

void		Victim::getPolymorphed(void) const {
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

/*
** ------------------ Overloads ------------------
*/

std::ostream & operator<<(std::ostream & out, Victim const & object) {
	out << "I am " << object.getName() << " and I like otters!" << std::endl;
	return (out);
}

Victim & Victim::operator=(Victim const & src) {
	this->_name = src._name;
	return(*this);
}