/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 15:35:22 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/20 14:37:58 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
	Intern  someRandomIntern;
	Form*   rrf;
	Form*	scf;
	Form*	ppf;
	
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	scf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	ppf = someRandomIntern.makeForm("presidential pardon", "Bender");
	
	Bureaucrat bob("Bob", 5);
	
	bob.signForm(*rrf);
	bob.signForm(*scf);
	bob.signForm(*ppf);

	bob.executeForm(*rrf);
	bob.executeForm(*scf);
	bob.executeForm(*ppf);

	return 0;
}