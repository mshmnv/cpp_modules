/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 21:54:08 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/18 13:15:52 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _nbMaterias(0) {
	for (int i = 0; i < 3; i++)
		this->_materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src) {
	*this = src;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 3; i++)
		delete this->_materias[i];
}

void			MateriaSource::learnMateria(AMateria* materia) {
	if (this->_nbMaterias == 4 || materia == NULL)
		return;
	for (int i = 0; i < this->_nbMaterias; i++)
		if (this->_materias[i] == materia)
			return ;
	this->_materias[this->_nbMaterias] = materia->clone();
	this->_nbMaterias++;
}

AMateria*		MateriaSource::createMateria(std::string const & type) {
	int index = -1;
	for (int i = 0; i < _nbMaterias; i++)
	{
		if (this->_materias[i]->getType() == type)
			index = i;
	}
	if (index == -1)
		return 0;
	return (this->_materias[index]->clone());
}

MateriaSource&	MateriaSource::operator=(MateriaSource const & src) {
	for (int i = 0; i < this->_nbMaterias; i++)
		delete this->_materias[i];
	for (int i = 0; i < 3; i++)
		this->_materias[i] = NULL;
	for (int i = 0; i < src._nbMaterias; i++)
		this->_materias[i] = src._materias[i]->clone();
	this->_nbMaterias = src._nbMaterias;
	return (*this);
}
