/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 12:23:29 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/15 12:28:32 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist( void ) : AWeapon("Power Fist", 8, 50) {
	
}
PowerFist::PowerFist(PowerFist const & src) : AWeapon(src) {
	
}

PowerFist::~PowerFist( void ) {
	
}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}