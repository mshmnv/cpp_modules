/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 21:32:25 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/18 17:16:32 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim {

private:
	Victim();

protected:
	std::string	_name;

public:
	Victim(std::string name);
	Victim(Victim const & src);
	virtual ~Victim( void );

	Victim & operator=(Victim const & src);

	std::string		getName( void ) const;
	virtual void	getPolymorphed(void) const;
};

std::ostream & operator<<(std::ostream & out, Victim const & object);

#endif