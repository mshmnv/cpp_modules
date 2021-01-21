/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 00:16:48 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/20 13:26:51 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

private:

public:
	Intern();
	Intern(Intern const & src);
	~Intern();

	Intern& operator=(Intern const & src);

	Form*	makeForm(std::string formToMake, std::string target);
	Form*	MakeShrubbery(std::string target);
	Form*	MakeRobotomy(std::string target);
	Form*	MakePresidential(std::string target);

};

#endif