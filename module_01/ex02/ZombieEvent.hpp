/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 19:50:38 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/06 21:40:40 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent {
	
public:
	ZombieEvent( void );
	~ZombieEvent( void );

	Zombie* 	newZombie(std::string name);
	void		setZombieType(std::string type);
	Zombie*		randomChump( void );

private:
	std::string	_type;

};

#endif