/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:08:58 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/15 15:18:38 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & src) : Enemy(src) {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh..." << std::endl;
	
}

void	SuperMutant::takeDamage(int amount) {
	amount -= 3;
	if (amount < 0)
		return ;
	int damage = amount;
	this->_hp -= amount;
	if (this->_hp <= 0)
	{
		damage = this->_hp + amount;
		this->_hp = 0;
	}
	std::cout << "Supeer Mutant takes " << damage << " points of damage!" << std::endl;
}