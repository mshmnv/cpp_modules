/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 19:50:02 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/06 21:43:39 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
	
public:
	Zombie( void );
	Zombie(const std::string name, const std::string type);
	~Zombie( void );

	void		announce( void );

private:
	std::string	_type;
	std::string	_name;

};

#endif