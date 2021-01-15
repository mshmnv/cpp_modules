/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 21:51:01 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/14 22:39:12 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim {

public:
	Peon(std::string name);
	Peon(Peon const & src);
	~Peon( void );

	void getPolymorphed( void ) const;
};

#endif