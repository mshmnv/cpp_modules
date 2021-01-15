/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 12:21:28 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/15 12:28:11 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST
#define POWERFIST

#include "AWeapon.hpp"

class PowerFist : public AWeapon {

private:

public:
	PowerFist( void );
	PowerFist(PowerFist const & src);
	~PowerFist( void );

	void attack() const;
};

#endif