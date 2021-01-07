/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 22:03:44 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/07 17:01:46 by lbagg            ###   ########.fr       */
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
	void		setName(std::string name);
	void		setType(std::string type);

private:
	std::string	_type;
	std::string	_name;

};

#endif