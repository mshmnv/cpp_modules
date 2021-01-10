/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 19:56:17 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/10 20:34:13 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <iomanip>

class ScavTrap {

private:
	std::string	_name;
	int			_hitPoint;
	int			_maxHitPoint;
	int			_energyPoints;
	int			_maxEnergyPoints;
	int			_level;
	int			_meleeAttackDamage;
	int			_rangeAttackDamage;
	int			_armorDamageReduction;

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap();

	ScavTrap&	operator=(ScavTrap const & src);

	std::string	getName( void ) const;
	int			getEnergy( void ) const;
	int			getHitPoints( void ) const;

	void	setName(std::string name);

	void	rangedAttack(std::string const & target) const;
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	
	void	challengeNewcomer(std::string newComer);
};

std::ostream&	operator<<(std::ostream& out, ScavTrap const & src);

#endif
