/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 19:56:03 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/12 20:21:03 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** --------- Constructors and Destructor ---------
*/
ScavTrap::ScavTrap( void ) {
	std::cout << "ScavTrap created!" << std::endl;
	this->_name = "Noname";
	this->_hitPoint = 100;
	this->_maxHitPoint = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangeAttackDamage = 15;
	this->_armorDamageReduction = 3;
}

ScavTrap::ScavTrap( std::string name ) {
	std::cout << "ScavTrap created!" << std::endl;
	this->_name  = name;
	this->_hitPoint = 100;
	this->_maxHitPoint = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangeAttackDamage = 15;
	this->_armorDamageReduction = 3;
}

ScavTrap::ScavTrap( ScavTrap const & src ) {
	std::cout << "ScavTrap created!" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap destroyed!" << std::endl;
}

/*
** ------------------ Methods ------------------
*/
void	ScavTrap::challengeNewcomer( void ) {
	if (this->_energyPoints <= 25)
	{
		std::cout << "< " << this->_name << " >" << " doesn't have enough energy to get a challenge." << std::endl;
		return ;
	}
	_energyPoints -= 25;
	srand(time(0));
	std::string challenges[5] = {"to buy a chocolate", "to cry", "to eat a stone", "to run away", "to dance"};
	std::cout << "< " << this->_name << " > gets challenge: " << challenges[rand() % 5] << std::endl;
}
