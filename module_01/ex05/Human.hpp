/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 17:13:22 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/07 19:04:23 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"
#include <iostream>

class Human {

public:
	Human();
	~Human();
	std::string		identify();
	Brain&			getBrain();

private:
	Brain*			_brain;

};

#endif