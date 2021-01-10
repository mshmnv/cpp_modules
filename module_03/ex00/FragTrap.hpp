/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 00:05:50 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/10 10:26:27 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>

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
	FragTrap(FragTrap & const src);
	~FragTrap();

	FragTrap&	operator=(FragTrap const & src);

	void	rangedAttack(std::string const & target) const;
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	vaulthunter_dot_exe(std::string const & target);
	
};

#endif