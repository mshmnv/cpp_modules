/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 21:51:18 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/15 22:05:35 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
	AMateria*	_materias[4];
	int			_nbMaterias;
public:
	MateriaSource();
	MateriaSource(MateriaSource const & src);
	~MateriaSource();

	MateriaSource& operator=(MateriaSource const & src);

	void learnMateria(AMateria* materia);
	AMateria* createMateria(std::string const & type);

};

#endif