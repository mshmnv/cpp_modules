/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 15:35:22 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/20 14:33:20 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	Bureaucrat bob("Bob", 5);
	Bureaucrat tom("Tom", 150);

	std::cout << std::endl << "\tShrubberyCreationForm" << std::endl << std::endl;

	ShrubberyCreationForm bShrubbery("bobs_form");
	ShrubberyCreationForm tShrubbery("toms_form");
	std::cout << bShrubbery;
	std::cout << tShrubbery;
	bob.signForm(bShrubbery);
	tom.signForm(tShrubbery);
	bob.executeForm(bShrubbery);
	tom.executeForm(tShrubbery);

	std::cout << std::endl << "\tPresidentialPardonForm" << std::endl << std::endl;
	
	PresidentialPardonForm bPardon("Bob");
	PresidentialPardonForm tPardon("Tom");
	std::cout << bPardon;
	std::cout << tPardon;
	bob.signForm(bPardon);
	tom.signForm(tPardon);
	bob.executeForm(bPardon);
	tom.executeForm(tPardon);
	
	std::cout << std::endl << "\tRobotomyRequestForm" << std::endl << std::endl;

	RobotomyRequestForm	bRobotomy("Bob");
	RobotomyRequestForm tRobotomy("Tom");
	std::cout << bRobotomy;
	std::cout << tRobotomy;
	bob.signForm(bRobotomy);
	tom.signForm(tRobotomy);
	bob.executeForm(bRobotomy);
	tom.executeForm(tRobotomy);

	std::cout << std::endl << "\tExecuting unsigned form" << std::endl << std::endl;
	
	RobotomyRequestForm form("target");
	bob.executeForm(form);
	
	return 0;
}