/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 22:05:05 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/07 16:58:05 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <iostream>

class ZombieHorde {

public:
	ZombieHorde(int nbZombies, std::string type);
	~ZombieHorde( void );
	
	void announce();
	
private:
	int		_nbZombies;
	Zombie*	_zombies;

};

#endif