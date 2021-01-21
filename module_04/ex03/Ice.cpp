/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 20:29:46 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/15 21:29:17 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
}

Ice::Ice(Ice const & src) : AMateria(src) {
}

Ice::~Ice() {
	
}
	
AMateria* Ice::clone() const {
	Ice* newOne = new Ice(*this);
	return (newOne);
}

void Ice::use(ICharacter& target){
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
