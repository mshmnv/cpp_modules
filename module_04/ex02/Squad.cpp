/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 18:47:52 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/15 21:43:34 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _counts(0), _units(NULL) {
	
}

Squad::Squad(Squad const & src) : _counts(0), _units(NULL) {
	*this = src;
}

Squad::~Squad() {
	for (int i = 0; i < this->_counts; i++)
		delete this->_units[i];
	delete this->_units;
}

int				Squad::getCount() const {
	return this->_counts;
}

ISpaceMarine*	Squad::getUnit(int n) const {
	if (this->_counts && n <= this->_counts && n >= 0)
		return (_units[n]);
	return NULL;
	
}

int				Squad::push(ISpaceMarine* marine) {
	if (marine == NULL)
		return 0;
	if (this->_counts)
	{
		ISpaceMarine** newOnes = new ISpaceMarine*[this->_counts + 1];
		for (int i = 0; i < this->_counts; i++)
			newOnes[i] = this->_units[i];
		delete [] this->_units;
		this->_units = newOnes;
		this->_units[this->_counts] = marine;
		this->_counts += 1;
		return (this->_counts);
	}
	this->_counts += 1;
	this->_units =  new ISpaceMarine*[1];
	this->_units[0] = marine;	
	return (1);		
}

Squad & Squad::operator=(Squad const &src) {
	if (this->_units)
	{
		for (int i = 0; i < this->_counts; i++)
			delete this->_units[i];
		delete this->_units;
		this->_units = NULL;
	}
	this->_counts = 0;
	for (int i = 0; i < src.getCount(); i++)
		this->push(src.getUnit(i)->clone());
	
	return (*this);
}
