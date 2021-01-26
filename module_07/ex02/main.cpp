/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 16:44:05 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/25 21:19:05 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {

	std::cout << std::endl << "Empty Array" << std::endl;

	Array<int> empty;
	try {
		empty[0] = 9;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl << "Int Array" << std::endl;

	Array<int> full(5);
	for (int i = 0; i < full.size(); i++) {
		full[i] = i;
		std::cout << "full[" << i << "] = " << i << std::endl;
	}
	

	std::cout << std::endl << "Copy Array" << std::endl;
	
	Array<int> copy(full);
	for (int i = 0; i < copy.size(); i++)
		std::cout << "copy[" << i << "] = " << i << std::endl;


	std::cout << std::endl << "String Array" << std::endl;
	
	Array<std::string> str(5);
	for (int i = 0; i < str.size(); i++) {
		str[i] = "this is string";
		std::cout << "str[" << i << "] = " << i << std::endl;
	}
	
	return 0;
}