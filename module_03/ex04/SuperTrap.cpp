/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 20:29:38 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/12 21:22:46 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap( void ) {
	
}

SuperTrap::SuperTrap(std::string name) {
	this->_name = name;
}

SuperTrap::SuperTrap(SuperTrap const & src) {
	*this = src;
}


SuperTrap::~SuperTrap( void ) {
	
}