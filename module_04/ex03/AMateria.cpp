/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 20:22:35 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/15 22:50:03 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
	: _xp(0), _type(type) {
}

AMateria::AMateria(AMateria const & src) {
	*this = src;
}

AMateria::~AMateria() {
}

std::string const & AMateria::getType() const {
	return (_type);
}

unsigned int AMateria::getXP() const {
	return (this->_xp);
}

void AMateria::use(ICharacter& target) {
	this->_xp += 10;
}

AMateria& AMateria::operator=(AMateria const & src) {
	this->_xp = src.getXP();
	this->_type = src.getType();
	return (*this);
}
