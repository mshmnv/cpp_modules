/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 11:51:26 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/15 12:19:37 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

/*
** --------- Constructors and Destructor ---------
*/

AWeapon::AWeapon(std::string const & name, int apcost, int damage) 
	: _name(name), _apcost(apcost), _damage(damage) {
	
}
AWeapon::AWeapon(AWeapon const & src) {
	*this = src;
}

AWeapon::~AWeapon() {
	
}

/*
** ------------------ Methods ------------------
*/

std::string		AWeapon::getName() const {
	return (this->_name);
}

int				AWeapon::getAPCost() const {
	return (this->_apcost);
}
int				AWeapon::getDamage() const {
	return (this->_damage);
}

/*
** ------------------ Overloads ------------------
*/

AWeapon &		AWeapon::operator=(AWeapon const & src) {
	this->_name = src._name;
	this->_apcost = src._apcost;
	this->_damage = src._damage;
	return (*this);
}

std::ostream&	operator<<(std::ostream& out, AWeapon const & src) {
	out << "-------------------------------------------------" << std::endl;
	out << "|" << std::setw(15) << "NAME" << "|";
	out << std::setw(15) << "Shoot Cost";
	out << "|" << std::setw(15) << "Damage" << "|" << std::endl;
	out << "-------------------------------------------------" << std::endl;
	out << "|" << std::setw(15) << src.getName() << "|";
	out << std::setw(15) << src.getAPCost();
	out << "|" << std::setw(15) << src.getDamage() << "|" << std::endl;
	out << "-------------------------------------------------" << std::endl;
	return (out);
}