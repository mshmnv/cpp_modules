/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 02:22:43 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/06 21:21:26 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>


class Pony {

public:
	Pony( void );
	~Pony( void );

	void				change_color( void );
	void				celebrate_birthday( void );

private:
	std::string		_color;
	int				_age;

};

#endif
