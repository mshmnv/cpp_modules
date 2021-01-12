/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 00:04:59 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/12 21:18:42 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"



int main ( void ) {
/*
**	NinjaTrap
*/
	NinjaTrap ninja("ninja");
	ClapTrap clap("claptrap_name");
	FragTrap frag("fragtrap_name");
	ScavTrap scav("scavtrap_name");

	std::cout << ninja;
	ninja.takeDamage(15);
	ninja.beRepaired(15);
	std::cout << ninja;

	ninja.ninjaShoebox(ninja);
	ninja.ninjaShoebox(clap);
	ninja.ninjaShoebox(frag);
	ninja.ninjaShoebox(scav);



	return 0;
}