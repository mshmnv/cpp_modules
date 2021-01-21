/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 20:19:36 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/18 18:10:27 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
class AMateria;
#include "ICharacter.hpp"

class AMateria {

private:
    std::string		_type;
    unsigned int	_xp;

public:
    AMateria(std::string const & type);
    AMateria(AMateria const & src);
    virtual ~AMateria();

	AMateria& operator=(AMateria const & src);

	std::string const &	getType() const;
	unsigned int		getXP() const;
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
};

#endif