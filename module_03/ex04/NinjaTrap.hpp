/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 20:36:49 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/12 21:09:25 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {

private:

public:
	NinjaTrap( void );
	NinjaTrap( std::string name );
	NinjaTrap( NinjaTrap const & src);
	~NinjaTrap( void );

	void	ninjaShoebox(ClapTrap & clap);
	void	ninjaShoebox(FragTrap & frag);
	void	ninjaShoebox(ScavTrap & scav);
	void	ninjaShoebox(NinjaTrap & ninja);





};

#endif