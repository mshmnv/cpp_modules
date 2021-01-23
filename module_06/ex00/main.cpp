/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 11:41:18 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/23 08:54:59 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cast.hpp"

int main(int argc, char** argv) {
	if (argc != 2)
	{
		std::cout << "Print this: " << argv[0] << " < value >" << std::endl;
		return 0;
	}
	
	Cast cast(argv[1]);

	cast.print();
	// std::cout << "char: ";
	// cast.printCharValue();
	// std::cout << std::endl;
	
	// std::cout << "int: ";
	// cast.printIntValue();
	// std::cout << std::endl;

	// std::cout << "float: ";
	// cast.printFloatValue();
	// std::cout << std::endl;
	
	// std::cout << "double: ";
	// cast.printDoubleValue();
	// std::cout << std::endl;
	
	return 0;
}