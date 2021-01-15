/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 00:04:59 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/13 20:02:25 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main ( void ) {

	ClapTrap clap("Clap");
	clap.getInfo();
	clap.takeDamage(15);
	clap.beRepaired(15);
	clap.rangedAttack("cat");
	clap.meleeAttack("dog");

	std::cout << std::endl;

	FragTrap frag("Frag");
	frag.getInfo();
	frag.takeDamage(15);
	frag.beRepaired(15);
	frag.rangedAttack("cat");
	frag.meleeAttack("dog");
	frag.vaulthunter_dot_exe("mouse");
	
	std::cout << std::endl;

	ScavTrap scav("Scav");
	scav.getInfo();
	scav.takeDamage(15);
	scav.beRepaired(15);
	scav.rangedAttack("cat");
	scav.meleeAttack("dog");
	scav.challengeNewcomer();

	std::cout << std::endl;

	NinjaTrap ninja("Ninja");
	ninja.getInfo();
	ninja.takeDamage(15);
	ninja.beRepaired(15);
	ninja.rangedAttack("cat");
	ninja.meleeAttack("dog");
	ninja.ninjaShoebox(clap);
	ninja.ninjaShoebox(frag);
	ninja.ninjaShoebox(ninja);
	ninja.ninjaShoebox(scav);

	std::cout << std::endl;

	SuperTrap super("Super");
	super.getInfo();
	super.takeDamage(15);
	super.beRepaired(15);
	super.rangedAttack("cat");
	super.meleeAttack("dog");
	super.vaulthunter_dot_exe("mouse");
	super.ninjaShoebox(clap);
	super.ninjaShoebox(frag);
	super.ninjaShoebox(ninja);
	super.ninjaShoebox(scav);

	return 0;
}