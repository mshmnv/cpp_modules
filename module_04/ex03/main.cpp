/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 20:45:59 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/18 14:41:39 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main() {
	IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");

	std::cout << std::endl << "\tice | fire" << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("fire");
	me->equip(tmp);
	me->use(0, *bob);
	me->use(1, *bob);
	
	std::cout << std::endl << "\tice | cure" << std::endl;

	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl << "\tice | cure | ice | ice | ice" << std::endl;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);

	std::cout << std::endl << "\tunequip # 0" << std::endl;

	me->unequip(0);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);

	std::cout << std::endl << "\tunequip all" << std::endl;

	me->unequip(2);
	me->unequip(1);
	me->unequip(0);

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);

	std::cout << std::endl << "\tmateria exp" << std::endl;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	AMateria* icePtr = tmp;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	AMateria* curePtr = tmp;

	me->use(0, *bob);
	me->use(0, *bob);
	me->use(0, *bob);

	me->use(1, *bob);

	std::cout <<  icePtr->getType() << " materia exp: " << icePtr->getXP() << std::endl;
	std::cout <<  curePtr->getType() << " materia exp: " << curePtr->getXP() << std::endl;

	delete bob;
	delete me;
	delete src;

	return 0;
}

// int main() {
	
    // IMateriaSource* src = new MateriaSource();
    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());
	
	// ICharacter* me = new Character("me");
	
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
	
	// ICharacter* bob = new Character("bob");
	
// 	me->use(0, *bob);
// 	me->use(1, *bob);

// 	delete bob;
// 	delete me;
// 	delete src;
	
// 	return 0;
// }

