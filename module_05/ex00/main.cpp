/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 15:35:22 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/20 14:19:27 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
/*
** Too High
*/
	try
	{
		Bureaucrat bob("Bob", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
/*
** Too Low
*/
	try
	{
		Bureaucrat bob("Bob", 500);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
/*
** Too High with Increment
*/
	try
	{
		Bureaucrat bob("Bob", 1);
		bob.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
/*
** Too Low with Decrement
*/
	try
	{
		Bureaucrat bob("Bob", 150);
		bob.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Bureaucrat bob("Bob", 150);
	bob.incrementGrade();
	std::cout << bob;
	bob.decrementGrade();
	std::cout << bob;

	return 0;
}