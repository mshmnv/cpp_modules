/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 17:10:18 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/07 19:09:25 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <sstream>


class Brain {

public:
	Brain( void );
	Brain(int iq, std::string size);
	~Brain( void );

	std::string identify();

private:
	std::string		_size;
	int				_iq;
};

#endif