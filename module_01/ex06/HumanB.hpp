/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 21:51:57 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/07 22:37:44 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB {

public:
	HumanB(std::string name);
	~HumanB( void );

	void	attack( void ) const;
	void	setWeapon(Weapon humanWeapon);

private:
	std::string _name;
	Weapon*		_weaponPtr;
};

#endif