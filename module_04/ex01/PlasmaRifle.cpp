/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 12:14:05 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/15 12:20:52 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle( void ) : AWeapon("Plasma Rifle", 5, 21) {

}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) : AWeapon(src) {
	
}

PlasmaRifle::~PlasmaRifle() {
	
}

void	PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}