/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 00:04:59 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/10 20:44:00 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main ( void ) {
/*
**	ScavTrap
*/
	ScavTrap a("A");
	std::cout << a;

	a.takeDamage(50);
	a.beRepaired(15);
	std::cout << a;
	
	a.challengeNewcomer("NewComer");
	std::cout << std::endl;
/*
**	FragTrap
*/
	FragTrap b("B");
	std::cout << b;

	b.takeDamage(50);
	b.beRepaired(15);
	std::cout << b;

	b.vaulthunter_dot_exe("Target");
	std::cout << std::endl;

	return 0;
}