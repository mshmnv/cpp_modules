/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 12:06:54 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/18 17:47:46 by lbagg            ###   ########.fr       */
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

	std::cout << std::endl;

 	Character* me = new Character("me");
	
    std::cout << *me;

	Enemy* scorp = new RadScorpion();
	Enemy* mutant = new SuperMutant();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(scorp);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(scorp);
	std::cout << *me;
	me->attack(scorp);
	std::cout << *me;

	std::cout << std::endl;

	me->attack(mutant);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(mutant);
	std::cout << *me;
	me->attack(mutant);
	me->equip(pf);
	std::cout << *me;
	me->attack(mutant);
	
	std::cout << std::endl;
/*
** recovery
*/
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;
	
	std::cout << std::endl;

	me->attack(mutant);
	std::cout << *me;
	me->attack(mutant);
	std::cout << *me;
	me->attack(mutant);
	std::cout << *me;

	std::cout << std::endl;
/*
** some other enemies
*/
	me->recoverAP();

	Enemy* tree = new Enemy(100, "tree");
	me->attack(tree);

	delete pr;
	delete pf;
	delete me;
	
	return 0;
}