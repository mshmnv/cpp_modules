/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 19:50:47 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/06 22:01:23 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main( void ) {
	
	Zombie* firstZombie = new Zombie("Mark", "Sad zombie");
	firstZombie->announce();
	delete firstZombie;

	ZombieEvent event;
	Zombie* secondZombie = event.randomChump();
	delete secondZombie;

	event.setZombieType("Funny zombie");
	Zombie* thirdZombie = event.randomChump();
	delete thirdZombie;

	return 0;
}