/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 19:56:03 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/10 20:40:06 by lbagg            ###   ########.fr       */
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

ScavTrap::ScavTrap( std::string name ) : _name(name) {
	std::cout << "ScavTrap created!" << std::endl;
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
void		ScavTrap::setName(std::string name) {
	this->_name = name;
}

std::string	ScavTrap::getName( void ) const {
	return (this->_name);
}

int			ScavTrap::getEnergy( void ) const {
	return (this->_energyPoints);
}

int			ScavTrap::getHitPoints( void ) const {
	return (this->_hitPoint);
}

void	ScavTrap::rangedAttack(std::string const & target) const {
	std::cout << "< " << this->_name << " > attacks " << target << " at range, causing " << this->_rangeAttackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target) {
	std::cout << "< " << this->_name << " > attacks " << target << " at melee, causing " << this->_meleeAttackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount) {
	int damage = amount;
	this->_hitPoint -= amount;
	if (this->_hitPoint <= 0)
	{
		damage = this->_hitPoint + amount;
		this->_hitPoint = 0;
	}
	std::cout << "< " << this->_name << " > " << "Ahhh! ";
	std::cout << this->_name << " takes " << damage << " points of damage!" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount) {
	int heal = amount;
	this->_hitPoint += amount;
	if (this->_hitPoint > this->_maxHitPoint)
	{
		heal = this->_maxHitPoint - this->_hitPoint + amount ;
		this->_hitPoint = this->_maxHitPoint;
	}
	std::cout << "< " << this->_name << " >" << " is healed on " << heal << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string newComer) {
	std::string challenges[5] = {"to buy him a chocolate", "to cry", "to eat a stone", "to run away", "to dance"};
	std::cout << "< " << this->_name << " > challenges " << newComer << " " << challenges[rand() % 5] << std::endl;
	
}

/*
** ------------------ Overloads ------------------
*/
ScavTrap&	ScavTrap::operator=(ScavTrap const & src) {
	this->_name = src._name;
	this->_level = src._level;
	this->_energyPoints = src._energyPoints;
	this->_maxEnergyPoints = src._maxEnergyPoints;
	this->_hitPoint = src._hitPoint;
	this->_maxHitPoint = src._maxHitPoint;
	this->_meleeAttackDamage = src._meleeAttackDamage;
	this->_rangeAttackDamage = src._rangeAttackDamage;
	this->_armorDamageReduction = src._armorDamageReduction;
	return (*this);
}

std::ostream&	operator<<(std::ostream& out, ScavTrap const & src) {
	out << "----------------------------------" << std::endl;
	out << "|" << std::setw(10) << "NAME" << "|";
	out << std::setw(10) << "ENERGY";
	out << "|" << std::setw(10) << "POINTS" << "|" << std::endl;
	out << "----------------------------------" << std::endl;
	out << "|" << std::setw(10) << src.getName() << "|";
	out << std::setw(10) << src.getEnergy();
	out << "|" << std::setw(10) << src.getHitPoints() << "|" << std::endl;
	out << "----------------------------------" << std::endl;
	return (out);
}