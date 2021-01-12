/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 19:56:17 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/12 20:03:50 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

private:

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap();
	
	void	challengeNewcomer( void );
};

#endif
