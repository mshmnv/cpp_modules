/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 00:04:59 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/13 20:01:45 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


int main ( void ) {

	FragTrap first("First");
	FragTrap second(first);
	second.setName("Second");

	std::cout << first;
	std::cout << second;
/*
** Ranged attack
*/
	first.rangedAttack(second.getName());
	second.takeDamage(20);
	std::cout << std::endl;
/*
** Melee attack
*/
	second.meleeAttack(first.getName());
	first.takeDamage(30);

	std::cout << first;
	std::cout << second;
/*
** Random attack
*/	
	int damage = first.vaulthunter_dot_exe(second.getName());
	second.takeDamage(damage);

	std::cout << std::endl;

	damage = second.vaulthunter_dot_exe(first.getName());
	first.takeDamage(damage);

	std::cout << first;
	std::cout << second;
/*
** Repairing
*/
	first.beRepaired(20);
	second.beRepaired(10);
	std::cout << first;
	std::cout << second;
/*
** More damage and repairing
*/
	first.takeDamage(100);
	second.beRepaired(100);	
	std::cout << first;
	std::cout << second;
/*
** Losing energy
*/
	damage = first.vaulthunter_dot_exe(second.getName());
	second.takeDamage(damage);
	std::cout << std::endl;
	damage = first.vaulthunter_dot_exe(second.getName());
	second.takeDamage(damage);
	std::cout << std::endl;
	damage = first.vaulthunter_dot_exe(second.getName());
	second.takeDamage(damage);
	std::cout << std::endl;
	damage = first.vaulthunter_dot_exe(second.getName());
	second.takeDamage(damage);
	std::cout << std::endl;
	
	return 0;
}