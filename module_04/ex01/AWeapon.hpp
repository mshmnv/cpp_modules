/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 11:51:37 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/19 01:10:48 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>
#include <iomanip>

class AWeapon {

protected:
	std::string	_name;
	int			_apcost;
	int			_damage;

public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const & src);
	virtual ~AWeapon();

	AWeapon &		operator=(AWeapon const & src);

    std::string		getName() const;
    int				getAPCost() const;
	int				getDamage() const;
    
	virtual void	attack() const = 0;
};

std::ostream&	operator<<(std::ostream& out, AWeapon const & src);

#endif