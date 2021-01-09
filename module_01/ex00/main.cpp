/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 02:22:32 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/08 16:51:03 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack( void ) {
	Pony stackPony;
	
	stackPony.change_color();
	stackPony.celebrate_birthday();
}

void	ponyOnTheHeap( void ) {
	Pony* heapPony = new Pony;

	heapPony->change_color();
	heapPony->celebrate_birthday();
	delete heapPony;
}


int	main( void ) {
	std::cout << std::endl << "PONY ON THE STACK" << std::endl;
	ponyOnTheStack();

	std::cout << std::endl << "PONY ON THE HEAP" << std::endl;
	ponyOnTheHeap();

	std::cout << std::endl <<"No Pony is alive now." << std::endl;
	return 0;
}