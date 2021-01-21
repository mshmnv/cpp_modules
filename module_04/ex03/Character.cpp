/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 20:49:07 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/18 14:37:19 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name) , _nbMaterias(0) {
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
}

Character::Character(Character const & src) {
	*this = src;
}

Character::~Character() {
	for (int i = 0; i < _nbMaterias; i++)
		delete this->_materias[i];
}

std::string const &	Character::getName() const {
	return (this->_name);
}

void 				Character::equip(AMateria* m) {
	if (this->_nbMaterias == 4 || m == NULL)
		return;
	if (this->_nbMaterias)
	{
		for (int i = 0; i < _nbMaterias; i++)
			if (_materias[i] == m)
				return ;
		_materias[_nbMaterias] = m;
	}
	else
		this->_materias[0] = m;
	_nbMaterias++;
}

void				Character::unequip(int idx) {
	if (idx < 0 || idx >= this->_nbMaterias)
		return;
	this->_nbMaterias--;
	for (int i = idx; i < 3; i++)
	{
		this->_materias[i] = this->_materias[i + 1];
		this->_materias[i + 1] = NULL;
	}
}

void				Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= this->_nbMaterias)
		return ;
	this->_materias[idx]->use(target);
}

Character&			Character::operator=(Character const & src) {
	this->_name = src.getName();
	for (int i = 0; i < this->_nbMaterias; i++)
		delete this->_materias[i];
	for (int i = 0; i < 3; i++)
		this->_materias[i] = NULL;
	for (int i = 0; i < src._nbMaterias; i++)
		this->_materias[i] = src._materias[i]->clone();
	this->_nbMaterias = src._nbMaterias;
	return (*this);
}
