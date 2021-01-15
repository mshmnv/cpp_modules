/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 20:29:38 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/14 12:37:03 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap( void ) : ClapTrap(), NinjaTrap(), FragTrap() {
	std::cout << "SuperTrap created!" << std::endl;
	this->_name = "Noname";
	this->_level = 1;
	this->_hitPoint = 100;
	this->_maxHitPoint = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeAttackDamage = 60;
	this->_rangeAttackDamage = 20;
	this->_armorDamageReduction = 5;	
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), NinjaTrap(name), FragTrap(name) {
	std::cout << "SuperTrap created!" << std::endl;
	this->_name = name;
	this->_level = 1;
	this->_hitPoint = 100;
	this->_maxHitPoint = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeAttackDamage = 60;
	this->_rangeAttackDamage = 20;
	this->_armorDamageReduction = 5;
}

SuperTrap::SuperTrap(SuperTrap const & src) : NinjaTrap(src), FragTrap(src) {
	std::cout << "SuperTrap created!" << std::endl;
	*this = src;
}

SuperTrap::~SuperTrap( void ) {
	std::cout << "SuperTrap destroyed!" << std::endl;
}

/*
** ------------------ Methods ------------------
*/
void		SuperTrap::rangedAttack(std::string const & target) const {
	FragTrap::rangedAttack(target);
}
void		SuperTrap::meleeAttack(std::string const & target) const {
	NinjaTrap::meleeAttack(target);
}