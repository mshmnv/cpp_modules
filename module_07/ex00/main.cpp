/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 19:26:53 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/24 20:29:13 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"


int main() {
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	// std::string e = "chaine3";
	// std::string f = "chaine3";

	// std::cout << "f -> " << &f  << std::endl;

	// std::cout << "e = " << e << ", f = " << f << std::endl;
	// ::swap(e, f);
	// std::cout << "e = " << e << ", f = " << f << std::endl;
	// std::cout << "f -> " << &f  << std::endl;

	// std::cout << "min(e, f) = " << ::min(e, f) << " (" << &::min(e, f) << ")" << std::endl;
	// std::cout << "max(e, f) = " << ::max(e, f) << " (" << &::max(e, f) << ")" << std::endl;
	return 0;
}