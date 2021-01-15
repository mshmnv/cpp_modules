/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 21:50:42 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/14 23:23:38 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

/*
** --------- Constructors and Destructor ---------
*/

Peon::Peon(std::string name) : Victim(name) {
	this->_name = name;
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & src) : Victim(src.getName()) {
	std::cout << "Zog zog." << std::endl;
	*this = src;
}

Peon::~Peon( void ) {
	std::cout << "Bleuark..." << std::endl;
}

/*
** ------------------ Methods ------------------
*/

void	Peon::getPolymorphed( void ) const {
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}
