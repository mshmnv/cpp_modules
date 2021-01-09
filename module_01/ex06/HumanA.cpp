/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 21:47:01 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/07 22:29:51 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& humanWeapon) : _name(name),  _weaponRef(humanWeapon) {
}

HumanA::~HumanA( void ) {
	
}

void	HumanA::attack( void ) const {
	std::cout << this->_name << " attacks with his " << this->_weaponRef.getType() << std::endl;
}