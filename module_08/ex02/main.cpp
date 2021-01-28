/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 12:39:30 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/28 22:22:49 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>

int main() {

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "Top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << std::endl << "Interator: ";
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;

	std::cout << std::endl << "Const Interator: ";
	MutantStack<int>::iterator c_it = mstack.begin();
	MutantStack<int>::iterator c_ite = mstack.end();
	++c_it;
	--c_it;
	while (c_it != c_ite) {
		std::cout << *c_it << " ";
		++c_it;
	}
	std::cout << std::endl;

	std::cout << std::endl << "Reverse Interator: ";
	MutantStack<int>::reverse_iterator r_it = mstack.rbegin();
	MutantStack<int>::reverse_iterator r_ite = mstack.rend();
	++r_it;
	--r_it;
	while (r_it != r_ite) {
		std::cout << *r_it << " ";
		++r_it;
	}
	std::cout << std::endl;

	std::cout << std::endl << "Const Reverse Interator: ";
	MutantStack<int>::reverse_iterator cr_it = mstack.rbegin();
	MutantStack<int>::reverse_iterator cr_ite = mstack.rend();
	++cr_it;
	--cr_it;
	while (cr_it != cr_ite) {
		std::cout << *cr_it << " ";
		++cr_it;
	}
	std::cout << std::endl;

	std::cout << std::endl << "Stack from MutantStack" << std::endl;
	std::stack<int> s(mstack);
	std::cout << "Top: " << s.top() << std::endl;
	s.pop();
	std::cout << "Size: " << s.size() << std::endl;

	return 0;
}