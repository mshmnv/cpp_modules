/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 14:15:25 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/18 17:16:09 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer {

private:
	Sorcerer();
	std::string	_name;
	std::string	_title;

public:
	Sorcerer(std::string name, std::string title);
	Sorcerer( Sorcerer const & src);
	~Sorcerer();

	Sorcerer & operator=(Sorcerer const & src);

	std::string getName( void ) const;
	std::string getTitle( void ) const;

	void polymorph(Victim const & victim) const;
};

std::ostream & operator<<(std::ostream & out, Sorcerer const & inst);

#endif