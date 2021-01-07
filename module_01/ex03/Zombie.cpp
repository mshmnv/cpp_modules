/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 22:03:12 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/07 17:01:41 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
}

Zombie::Zombie( void ) {
}

Zombie::~Zombie( void ) {
	std::cout << this->_type << " " << this->_name << " is dead" << std::endl;
}

void	Zombie::announce( void ) {
	std::cout << "<" << this->_name << " (" << this->_type << ")>  ";
	std::cout << "Braiiiiiiinnnssss..." << std::endl;
}

void	Zombie::setName(std::string name) {
	this->_name = name;
}

void	Zombie::setType(std::string type) {
	this->_type = type;
}
