/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 00:05:50 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/14 12:37:24 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"


class FragTrap : virtual public ClapTrap {
	
private:

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap();
	
	void	vaulthunter_dot_exe(std::string const & target);
	
};


#endif