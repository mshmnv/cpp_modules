/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 19:14:49 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/07 21:57:51 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string type) : _type(type) {
	
}

Weapon::~Weapon() {
	
}

const std::string&	Weapon::getType() {
	return this->_type;
}

void				Weapon::setType(std::string type){
	this->_type = type;
}