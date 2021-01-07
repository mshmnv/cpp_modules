/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 17:03:30 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/07 17:08:16 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void ) {
	
	std::string str = "HI THIS IS BRAIN";
	
	std::string* strPtr = &str;
	std::string& strRef = str;
	
	std::cout << "POINTER: " << *strPtr << std::endl;
	std::cout << "REFERENCE:  " << strRef << std::endl;

	return 0;
}