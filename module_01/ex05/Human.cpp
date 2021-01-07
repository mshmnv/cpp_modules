/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 17:11:57 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/07 19:07:49 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human( void ) {
	this->_brain = new Brain;
}

Human::~Human( void ) {
	std::cout << "Human is dead" << std::endl;
	delete this->_brain;
}

std::string		Human::identify() {
	return this->_brain->identify();
}

Brain&		Human::getBrain() {
	return *this->_brain;
}

