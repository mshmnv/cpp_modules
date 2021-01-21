/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 18:38:38 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/15 20:10:12 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad {

private:
	int				_counts;
	ISpaceMarine	**_units;

public:
	Squad();
	Squad(Squad const & src);
	~Squad();
	
	Squad &operator=(Squad const &src);
	
	int getCount() const;
	ISpaceMarine* getUnit(int n) const;
	int push(ISpaceMarine* marine);

};

#endif