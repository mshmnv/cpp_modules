/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 12:06:54 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/15 12:26:21 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main( void ) {

	PlasmaRifle a;
	a.attack();
	std::cout << a;

	PowerFist b;
	b.attack();
	std::cout << b;
	return 0;
}