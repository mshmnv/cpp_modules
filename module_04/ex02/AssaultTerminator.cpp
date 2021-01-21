/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 18:57:14 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/15 20:15:52 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & src) {
	*this = src;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator() {
	std::cout << "I’ll be back..." << std::endl;
}


ISpaceMarine*	AssaultTerminator::clone() const {
	ISpaceMarine* newOne = new AssaultTerminator(*this);
	return newOne;
}

void			AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void			AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;	
}

void			AssaultTerminator::meleeAttack() const {
	std::cout << "* attacks with chainfists *" << std::endl;

}

AssaultTerminator & AssaultTerminator::operator=(AssaultTerminator const & src) {
	return (*this);
}

