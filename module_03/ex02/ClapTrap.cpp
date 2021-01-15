/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 19:42:16 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/14 12:09:07 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** --------- Constructors and Destructor ---------
*/
ClapTrap::ClapTrap( void ) {
	std::cout << "ClapTrap created!" << std::endl;
	this->_name = "Noname";
	this->_hitPoint = 1;
	this->_maxHitPoint = 100;
	this->_energyPoints = 1;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangeAttackDamage = 20;
	this->_armorDamageReduction = 4;
}

ClapTrap::ClapTrap( std::string name ) {
	std::cout << "ClapTrap created!" << std::endl;
	this->_name = name;
	this->_hitPoint = 1;
	this->_maxHitPoint = 100;
	this->_energyPoints = 1;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangeAttackDamage = 20;
	this->_armorDamageReduction = 4;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	std::cout << "ClapTrap created!" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap destroyed!" << std::endl;
	
}

/*
** ------------------ Methods ------------------
*/
void		ClapTrap::setName(std::string name) {
	this->_name = name;
}

std::string	ClapTrap::getName( void ) const {
	return (this->_name);
}

int			ClapTrap::getEnergy( void ) const {
	return (this->_energyPoints);
}

int			ClapTrap::getHitPoints( void ) const {
	return (this->_hitPoint);
}

void	ClapTrap::rangedAttack(std::string const & target) const {
	std::cout << "< " << this->_name << " > attacks " << target << " at range, causing " << this->_rangeAttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target) const {
	std::cout << "< " << this->_name << " > attacks " << target << " at melee, causing " << this->_meleeAttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
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

void	ClapTrap::beRepaired(unsigned int amount) {
	int heal = amount;
	this->_hitPoint += amount;
	if (this->_hitPoint > this->_maxHitPoint)
	{
		heal = this->_maxHitPoint - this->_hitPoint + amount ;
		this->_hitPoint = this->_maxHitPoint;
	}
	std::cout << "< " << this->_name << " >" << " is healed on " << heal << std::endl;
}

/*
** ------------------ Overloads ------------------
*/
ClapTrap&	ClapTrap::operator=(ClapTrap const & src) {
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

std::ostream&	operator<<(std::ostream& out, ClapTrap const & src) {
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