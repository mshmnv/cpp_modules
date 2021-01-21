/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:35:06 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/18 17:21:58 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {

private:
	Character();
	std::string _name;
	int			_actionPoints;
	AWeapon*	_weapon;

public:
	Character(std::string const & name);
	Character(Character const & src);
	~Character();

	Character &	operator=(Character const & src);
	
	std::string	getName() const;
	int 		getAP() const;
	std::string	getWeaponName() const;

	void		recoverAP();
	void		equip(AWeapon* weapon);
	void		attack(Enemy* enemy);

};

std::ostream&	operator<<(std::ostream& out, Character const & src);

#endif