/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 00:06:18 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/10 10:27:28 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "Hocus pocus!" << std::endl;
	this->_name = "No name Robot";
	this->_hitPoint = 100;
	this->_maxHitPoint = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangeAttackDamage = 20;
	this->_armorDamageReduction = 4
}

FragTrap::FragTrap(std::string name) : _name(name) {
	std::cout << "Hocus pocus!" << std::endl;
	this->_hitPoint = 100;
	this->_maxHitPoint = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangeAttackDamage = 20;
	this->_armorDamageReduction = 4
}

FragTrap::FragTrap(FragTrap & const src) {
	*this = src;
}


FragTrap::~FragTrap() {
	
}

FragTrap&	FragTrap::operator=(FragTrap const & src) {
	this->_name = src._name;
	this->_level = src._level;
	this->_energyPoints = src._energyPoints;
	this->_maxEnergyPoints = src._maxEnergyPoints;
	this->_hitPoint = src._maxHitPoint;
	this->_meleeAttackDamage = src._meleeAttackDamage;
	this->_rangeAttackDamage = src._rangeAttackDamage;
	this->_armorDamageReduction = src._armorDamageReduction;
}


void	FragTrap::rangedAttack(std::string const & target) const {
	std::cout << "FR4G-TP <" << this->_name << "> attacks " << target << "at range, causing " << this->_rangeAttackDamage << "points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP <" << this->_name << "> attacks " << target << "at range, causing " << this->_meleeAttackDamage << "points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount) {
	
}

void	FragTrap::beRepaired(unsigned int amount) {
	
}


void	FragTrap::vaulthunter_dot_exe(std::string const & target) {
	
}
