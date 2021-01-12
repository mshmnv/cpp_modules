/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 20:37:41 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/12 21:14:00 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

/*
** --------- Constructors and Destructor ---------
*/
NinjaTrap::NinjaTrap( void ) {
	std::cout << "NinjaTrap created!" << std::endl;
	this->_name = "Noname";
	this->_hitPoint = 60;
	this->_maxHitPoint = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangeAttackDamage = 5;
	this->_armorDamageReduction = 0;
	
}

NinjaTrap::NinjaTrap( std::string name ) {
	std::cout << "NinjaTrap created!" << std::endl;
	this->_name = name;
	this->_hitPoint = 60;
	this->_maxHitPoint = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangeAttackDamage = 5;
	this->_armorDamageReduction = 0;
}

NinjaTrap::NinjaTrap( NinjaTrap const & src) {
	std::cout << "NinjaTrap created!" << std::endl;
	*this = src;
}

NinjaTrap::~NinjaTrap( void ) {
	std::cout << "NinjaTrap destroyed!" << std::endl;
}

/*
** ------------------ Methods ------------------
*/

void	NinjaTrap::ninjaShoebox(ClapTrap & clap) {
	if (this->_energyPoints <= 25)
	{
		std::cout << "< " << this->_name << " >" << " doesn't have enough energy to attack." << std::endl;
		return ;	
	}
	this->_energyPoints -= 25;
	std::cout << "< " << this->_name << " >" << " attacks " << clap.getName() << std::endl;

}

void	NinjaTrap::ninjaShoebox(FragTrap & frag) {
	if (this->_energyPoints <= 25)
	{
		std::cout << "< " << this->_name << " >" << " doesn't have enough energy to attack." << std::endl;
		return ;	
	}
	this->_energyPoints -= 25;
	std::cout << "< " << this->_name << " >" << " attacks " << frag.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap & scav) {
	if (this->_energyPoints <= 25)
	{
		std::cout << "< " << this->_name << " >" << " doesn't have enough energy to attack." << std::endl;
		return ;	
	}
	this->_energyPoints -= 25;
	std::cout << "< " << this->_name << " >" << " attacks " << scav.getName() << std::endl;	
}

void	NinjaTrap::ninjaShoebox(NinjaTrap & ninja) {
	if (this->_energyPoints <= 25)
	{
		std::cout << "< " << this->_name << " >" << " doesn't have enough energy to attack." << std::endl;
		return ;	
	}
	this->_energyPoints -= 25;
	std::cout << "< " << this->_name << " >" << " attacks " << ninja.getName() << std::endl;
	

}