/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 12:06:54 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/15 15:50:00 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main( void ) {
/*
**	AWeapon
*/
	PlasmaRifle rifle;
	rifle.attack();
	std::cout << rifle;

	PowerFist fist;
	fist.attack();
	std::cout << fist;

/*
**	Enemy
*/

	SuperMutant supermutant;
	supermutant.takeDamage(13);
	std::cout << supermutant;

	RadScorpion scorpion;
	scorpion.takeDamage(10);
	std::cout << scorpion;
	
/*
**	Character
*/
	Character character("Character");
	std::cout << character;

	return 0;
}