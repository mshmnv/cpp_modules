/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 20:34:18 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/15 22:48:17 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
	
Cure::Cure() : AMateria("cure") {
}

Cure::Cure(Cure const & src) : AMateria(src) {
}

Cure::~Cure() {
	
}

AMateria* Cure::clone() const {
	Cure* newOne = new Cure(*this);
	return (newOne);
}

void Cure::use(ICharacter& target){	
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}