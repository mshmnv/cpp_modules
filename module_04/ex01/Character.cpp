/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:35:16 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/18 17:39:57 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : _name(name), _actionPoints(40), _weapon(NULL) {
	
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
void		Character::equip(AWeapon* weapon) {
	this->_weapon = weapon;
}

void		Character::attack(Enemy* enemy) {
	if (!enemy)
		return ;
	if (_weapon == NULL)
	{
		std::cout << "Character has no Weapon to attack" << std::endl;
		return ;
	}
	if (_actionPoints <= _weapon->getAPCost())
	{
		std::cout << "Character has no Action Points to attack" << std::endl;
		return ;
	}
	std::cout << this->_name <<" attacks " << enemy->getType() << " with a "<< this->_weapon->getName() << std::endl;
	_weapon->attack();
	enemy->takeDamage(_weapon->getDamage());
	this->_actionPoints -= _weapon->getAPCost();
	if (enemy->getHP() == 0)
		delete enemy;
}

std::string Character::getName() const {
	return (this->_name);
}

int			Character::getAP() const {
	return (this->_actionPoints);
}

std::string	Character::getWeaponName() const {
	if (this->_weapon == NULL)
		return ("No Weapon");
	else
		return (this->_weapon->getName());
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
	if (src.getWeaponName() == "No Weapon")
		out << src.getName() << " has " << src.getAP() << " AP and is unarmed" << std::endl;
	else
		out << src.getName() << " has " << src.getAP() << " AP and wields a " << src.getWeaponName() << std::endl;
	return (out);
}