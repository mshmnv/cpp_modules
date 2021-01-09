/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 21:50:23 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/07 22:26:59 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA {

public:
	HumanA(std::string name, Weapon& humanWeapon);
	~HumanA( void );

	void attack( void ) const;

private:
	std::string _name;
	Weapon&		_weaponRef;
};

#endif