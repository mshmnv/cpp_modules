/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 22:13:56 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/28 22:22:33 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <vector>


int main() {
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
/*
** Container is Full
*/
	sp.addNumber(11);
	std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest: " << sp.longestSpan() << std::endl;


	std::cout << std::endl << "Empty Container" << std::endl;
	Span sp2 = Span(2);
	try {
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;

	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Copy Container" << std::endl;
	Span s3 = Span(sp);
	std::cout << "Shortest: " << s3.shortestSpan() << std::endl;
	std::cout << "Longest: " << s3.longestSpan() << std::endl;


	std::cout << std::endl << "Better addNumber" << std::endl;

	std::vector<int> vect;
	vect.insert(vect.begin(), 5, 42);
	Span sp4 = Span(6);
	sp4.addNumber(vect);
	sp4.addNumber(1);

	try {
		std::cout << "Shortest: " << sp4.shortestSpan() << std::endl;
		std::cout << "Longest: " << sp4.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
		
	return 0;
}