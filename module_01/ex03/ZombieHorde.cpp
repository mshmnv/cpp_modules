/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 22:04:36 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/07 17:00:57 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int nbZombies, std::string type) : _nbZombies(nbZombies) {
	const std::string name[10] = {"Mark", "Nick", "Robo", "Peter", "Bob", "Jeck", "Jef", "Alex", "Jonny", "Ted"};
	Zombie* newZombies = new Zombie[nbZombies];
	for (int i = 0; i < nbZombies; i++)
	{
		newZombies[i].setName(name[std::rand() % 10]);
		newZombies[i].setType(type);
	}
	this->_zombies = newZombies;
}

ZombieHorde::~ZombieHorde() {
	delete [] this->_zombies;
}

void ZombieHorde::announce() {
	for (int i = 0; i < this->_nbZombies; i++)
		this->_zombies[i].announce();
}
