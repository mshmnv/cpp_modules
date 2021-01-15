/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 19:40:22 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/14 12:10:31 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <iomanip>

class ClapTrap {

private:

protected:
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
	ClapTrap( void );
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & other);
	~ClapTrap( void );

	ClapTrap&	operator=(ClapTrap const & src);
	std::string	getName( void ) const;
	int			getEnergy( void ) const;
	int			getHitPoints( void ) const;
	void		setName(std::string name);
	
	void		rangedAttack(std::string const & target) const;
	void		meleeAttack(std::string const & target) const;
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

};

std::ostream&	operator<<(std::ostream& out, ClapTrap const & src);

#endif