/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 20:28:35 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/14 12:16:45 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>

class SuperTrap : public NinjaTrap, public FragTrap {

protected:

public:
	SuperTrap( void );
	SuperTrap( std::string name );
	SuperTrap( SuperTrap const & src );

	~SuperTrap( void );

	void		rangedAttack(std::string const & target) const;
	void		meleeAttack(std::string const & target) const;

};

#endif