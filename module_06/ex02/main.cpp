/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 12:21:15 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/24 13:16:45 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
 #include <iostream>
 
Base * generate(void) {
	srand(time(NULL));
	int i = rand() % 3;
	if (i == 0)
	{
		std::cout << "A generated" << std::endl;
		return (new A);
	}
	if (i == 1)
	{
		std::cout << "B generated" << std::endl;
		return (new B);
	}
	std::cout << "C generated" << std::endl;
	return (new C);
}

void identify_from_pointer(Base * p) {
	if (dynamic_cast<A*>(p) != 0)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != 0)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != 0)
		std::cout << "C" << std::endl;
}

void identify_from_reference( Base & p) {
	try {
		Aclass = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(std::bad_cast &bc) {}
	
}

int main() {
	Base* base = generate();
	
	identify_from_pointer(base);
	identify_from_reference(*base);
	
	return 0;
}