/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 12:11:20 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/15 12:27:11 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

private:

public:
	PlasmaRifle( void );
	PlasmaRifle(PlasmaRifle const & src);
	~PlasmaRifle();

	void attack() const;
};

#endif