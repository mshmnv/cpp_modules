/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 21:37:13 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/25 22:11:49 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <iostream>
#include <list>
#include <vector>

int main() {

	std::cout << std::endl << "List" << std::endl;
	std::list<int> lst;
	lst.push_back(21);
	lst.push_back(42);
	lst.push_back(121);
	lst.push_back(142);

	try {
		std::cout << "I found: "  << easyfind(lst, 42) << " in list" << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << easyfind(lst, 404) << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl << "Vector" << std::endl;
	std::vector<int> vect(3, 0);
	vect.push_back(1);
	vect.push_back(2);
	vect.push_back(3);

	try {
		std::cout << "I found: " << easyfind(vect, 3) << " in vector" << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << easyfind(vect, 404) << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	
	return 0;
}