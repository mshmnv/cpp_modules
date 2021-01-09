/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 19:50:20 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/08 16:58:43 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent ( void ) {
	this->_type = "No type zombie";
}


ZombieEvent::~ZombieEvent ( void ) {
	
}

void	ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name) {
	return  new Zombie(name, this->_type);
}

Zombie*	ZombieEvent::randomChump( void ) {
	const std::string name[10] = {"Mark", "Nick", "Robo", "Peter", "Bob", "Jeck", "Jef", "Alex", "Jonny", "Ted"};
	
	Zombie* newZombie = ZombieEvent::newZombie(name[std::rand() % 10]);
	newZombie->announce();
	return (newZombie);
}