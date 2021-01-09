/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 21:47:12 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/07 22:39:02 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weaponPtr(NULL) {
	
}

HumanB::~HumanB( void ) {
	
}

void	HumanB::attack( void ) const {
	if (this->_weaponPtr)
		std::cout << this->_name << " attacks with his " << this->_weaponPtr->getType() << std::endl;
	else
		std::cout << this->_name << " has no weapon to attack" << std::endl;
}

void	HumanB::setWeapon(Weapon humanWeapon) {
	this->_weaponPtr = &humanWeapon;
}
