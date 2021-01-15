/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 00:06:18 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/13 19:58:51 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** --------- Constructors and Destructor ---------
*/

FragTrap::FragTrap() {
	std::cout << "FragTrap created!" << std::endl;
	this->_name = "Noname";
	this->_hitPoint = 100;
	this->_maxHitPoint = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangeAttackDamage = 20;
	this->_armorDamageReduction = 5;
}

FragTrap::FragTrap(std::string name) {
	std::cout << "FragTrap created!" << std::endl;
	this->_name  = name;
	this->_hitPoint = 100;
	this->_maxHitPoint = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangeAttackDamage = 20;
	this->_armorDamageReduction = 5;
}

FragTrap::FragTrap(FragTrap const & src) {
	std::cout << "FragTrap created!" << std::endl;
	*this = src;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destroyed!" << std::endl;	
}

/*
** ------------------ Methods ------------------
*/
int		FragTrap::vaulthunter_dot_exe(std::string const & target) {
	std::string damage[5] = { "magic", "superpower fists", "disastrous smile", "little sharp knife", "42 team" };
	if (this->_energyPoints < 25)
		std::cout << "< " << this->_name << " >" << " doesn't have enough energy to use random attack." << std::endl;
	else
	{
		int damagePoints;
		srand(time(0));
		this->_energyPoints -= 25;
		std::cout << "< " << this->_name << " > attacks " << target << " with " << damage[rand() % 5];
		std::cout << ", causing " << (damagePoints = rand() % 30) << " points of danger!" << std::endl;
		return (damagePoints);
 	}
	 return 0;
}
