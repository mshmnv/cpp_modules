/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:35:16 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/15 15:52:02 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : _name(name), _actionPoints(40) {
	
}
Character::Character(Character const & src) {
	*this = src;
}

Character::~Character() {
	
}
	
void		Character::recoverAP() {
	if (this->_actionPoints <= 30)
		this->_actionPoints += 10;
	else if (this->_actionPoints > 30)
		this->_actionPoints = 40;
}
void		Character::equip(AWeapon*) {
	
}

void		Character::attack(Enemy*) {
	
}

std::string Character::getName() const {
	return (this->_name);
}

int			Character::getAP() const {
	return (this->_actionPoints);
}

/*
** ------------------ Overloads ------------------
*/

Character &		Character::operator=(Character const & src) {
	this->_name = src._name;
	this->_actionPoints = src._actionPoints;
	return (*this);
}

std::ostream&	operator<<(std::ostream& out, Character const & src) {
	out << "----------------------------------" << std::endl;
	out << "|" << std::setw(15) << "NAME" << "|";
	out << std::setw(15) << "AP" << "|" << std::endl;
	out << "----------------------------------" << std::endl;
	out << "|" << std::setw(15) << src.getName() << "|";
	out << std::setw(15) << src.getAP() << "|" << std::endl;
	out << "----------------------------------" << std::endl;
	return (out);
}