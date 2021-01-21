/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 15:35:22 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/19 18:31:49 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
/*
** Too High
*/
	try
	{
		Form form("Form", 0, 0);
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
		Form form("Form", 155, 155);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	Bureaucrat	bob("Bob", 51);
	Bureaucrat	tom("Tom", 50);
	Form		form("Form", 50, 50);
/*
** Bureaucrat try to sign
*/
	bob.signForm(form);

/*
** Bureaucrat signs form
*/
	tom.signForm(form);

/*
** Bureaucrat signs form again
*/
	bob.incrementGrade();
	bob.signForm(form);
	return 0;
}