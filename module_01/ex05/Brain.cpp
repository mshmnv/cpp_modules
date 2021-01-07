/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 17:10:59 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/07 19:10:38 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
	this->_iq = 0;
	this->_size = "medium";
}

Brain::Brain(int iq, std::string size) : _iq(iq), _size(size) {

}

Brain::~Brain( void ) {
	std::cout << "Brain is dead" << std::endl;
}

std::string	Brain::identify( void ) {
	std::stringstream addr;
	addr << this;
	return (addr.str());
}