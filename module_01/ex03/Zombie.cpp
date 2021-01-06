/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 22:03:12 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/06 22:04:21 by lbagg            ###   ########.fr       */
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