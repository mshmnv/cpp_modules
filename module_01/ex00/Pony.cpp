/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 02:22:40 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/06 19:31:25 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony( void ) {
	this->_age = 0;
	this->_color = "White";
	std::cout << this->_color <<" Pony is born." << std::endl;
}

Pony::~Pony( void ) {
	std::cout << this->_color <<" Pony died" << std::endl;
}

void		Pony::change_color( void ) {
	std::string pony_colors[5] = {"Blue", "Pink", "Orange", "Black", "White"};
	this->_color = pony_colors[std::rand() % 5];
	std::cout << "Your Pony is " << this->_color << " now." <<std::endl;
}

void		Pony::celebrate_birthday( void ) {
	this->_age += 1;
	std::cout << "Happy birthday! Your " <<this->_color << " Pony is " << this->_age << " years old!" << std::endl;
}

