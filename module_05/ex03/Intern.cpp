/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 00:18:38 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/20 14:39:16 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	
}

Intern::Intern(Intern const & src) {
	*this = src;
}

Intern::~Intern() {
	
}

Intern&	Intern::operator=(Intern const & src) {
	return *this;
}

Form*	Intern::MakeShrubbery(std::string target) {
	std::cout << "Intern creates <ShrubberyCreationForm>" << std::endl;
	return new ShrubberyCreationForm(target);
}

Form*	Intern::MakeRobotomy(std::string target) {
	std::cout << "Intern creates <RobotomyRequestForm>" << std::endl;
	return new RobotomyRequestForm(target);
}
Form*	Intern::MakePresidential(std::string target) {
	std::cout << "Intern creates <PresidentialPardonForm>" << std::endl;
	return new PresidentialPardonForm(target);
}

Form*	Intern::makeForm(std::string formToMake, std::string target) {
	Form* (Intern::*formFunc[3])(std::string) = {&Intern::MakeRobotomy, &Intern::MakeShrubbery, &Intern::MakePresidential};
	std::string formName[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	for (int i = 0; i < 3; i++)
		if (formName[i] == formToMake)
			return	(this->*(formFunc[i]))(target);
	std::cout << "Form <" << formToMake << "> not found" << std::endl;
	return (NULL);
}
