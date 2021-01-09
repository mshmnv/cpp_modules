/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 19:14:24 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/07 21:57:27 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {

public:
	Weapon(std::string type);
	~Weapon( void );

	const std::string&	getType();
	void				setType(std::string type);

private:
	std::string		_type;

};

#endif
