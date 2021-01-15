/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 00:05:50 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/14 12:07:26 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <iomanip>

class FragTrap {
	
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
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap();

	FragTrap&	operator=(FragTrap const & src);

	std::string	getName( void ) const;
	int			getEnergy( void ) const;
	int			getHitPoints( void ) const;

	void		setName(std::string name);

	void		rangedAttack(std::string const & target) const;
	void		meleeAttack(std::string const & target) const;
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	int			vaulthunter_dot_exe(std::string const & target);
	
};

std::ostream&	operator<<(std::ostream& out, FragTrap const & src);


#endif