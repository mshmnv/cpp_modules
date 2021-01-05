/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 02:56:38 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/05 22:10:45 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.class.hpp"

int	main(int argc, char **args) {

	Phonebook	redBook;
	std::string	cmd;

	while (21) {
		std::cout << "Enter any of this commands: ADD | SEARCH | EXIT" << std::endl;
		std::cin >> cmd;
		if (cmd == "ADD")
		{
			if (redBook.numContacts == 8)
				std::cout << "My Phonebook is full" << std::endl;
			else
				redBook.add();
		}
		else if (cmd == "SEARCH")
			redBook.search();
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "Wrong command! Try once more :)" << std::endl;
	}
	return 0;
}