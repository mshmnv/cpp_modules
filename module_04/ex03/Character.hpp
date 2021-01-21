/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 20:41:23 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/15 22:34:59 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {

private:
	std::string _name;
	AMateria*	_materias[4];
	int			_nbMaterias;
	
public:
	Character(std::string name);
	Character(Character const & src);
	~Character();

	Character& operator=(Character const & src);

	std::string const &	getName() const;

	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);


};

#endif