/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 00:06:18 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/14 12:06:59 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** --------- Constructors and Destructor ---------
*/
FragTrap::FragTrap() {
	std::cout << "Hocus pocus! FragTrap created!" << std::endl;
	this->_name = "Noname";
	this->_hitPoint = 100;
	this->_maxHitPoint = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangeAttackDamage = 20;
	this->_armorDamageReduction = 4;
}

FragTrap::FragTrap(std::string name) : _name(name) {
	std::cout << "Hocus pocus! FragTrap created!" << std::endl;
	this->_hitPoint = 100;
	this->_maxHitPoint = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangeAttackDamage = 20;
	this->_armorDamageReduction = 4;
}

FragTrap::FragTrap(FragTrap const & src) {
	std::cout << "Hocus pocus! FragTrap created!" << std::endl;
	*this = src;
}

FragTrap::~FragTrap() {
	std::cout << "Yessss, look into my eyes. You're getting sleepy. You're getting... zzzzzz... Zzzzzz..." << std::endl;	
}

/*
** ------------------ Methods ------------------
*/
void		FragTrap::setName(std::string name) {
	this->_name = name;
}

std::string	FragTrap::getName( void ) const {
	return (this->_name);
}

int			FragTrap::getEnergy( void ) const {
	return (this->_energyPoints);
}

int			FragTrap::getHitPoints( void ) const {
	return (this->_hitPoint);
}

void	FragTrap::rangedAttack(std::string const & target) const {
	std::cout << "< " << this->_name << " > attacks " << target << " at range, causing " << this->_rangeAttackDamage << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target) const {
	std::cout << "< " << this->_name << " > attacks " << target << " at melee, causing " << this->_meleeAttackDamage << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount) {
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

void	FragTrap::beRepaired(unsigned int amount) {
	int heal = amount;
	this->_hitPoint += amount;
	if (this->_hitPoint > this->_maxHitPoint)
	{
		heal = this->_maxHitPoint - this->_hitPoint + amount ;
		this->_hitPoint = this->_maxHitPoint;
	}
	std::cout << "< " << this->_name << " >" << " is healed on " << heal << std::endl;
}

int		FragTrap::vaulthunter_dot_exe(std::string const & target) {
	std::string damage[5] = { "magic", "superpower fists", "disastrous smile", "little sharp knife", "42 team" };
	if (this->_energyPoints < 25)
		std::cout << "< " << this->_name << " >" << " doesn't have enough energy to use random attack." << std::endl;
	else
	{
		int damagePoints;
		this->_energyPoints -= 25;
		std::cout << "< " << this->_name << " > attacks " << target << " with " << damage[rand() % 5];
		std::cout << ", causing " << (damagePoints = rand() % 30) << " points of danger!" << std::endl;
		return (damagePoints);
 	}
	 return 0;
}

/*
** ------------------ Overloads ------------------
*/
FragTrap&	FragTrap::operator=(FragTrap const & src) {
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

std::ostream&	operator<<(std::ostream& out, FragTrap const & src) {
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