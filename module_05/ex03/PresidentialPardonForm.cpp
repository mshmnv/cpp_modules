/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 18:51:57 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/19 23:50:51 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5, target) {
	
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src) {
	
}
PresidentialPardonForm::~PresidentialPardonForm() {
	
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	try
	{
		Form::execute(executor);
		std::cout << "<" << this->target << "> has been pardoned by Zafod Beeblebrox" << std::endl;
	}
	catch(const std::exception& e)
	{	
		std::cerr << "<"<< executor.getName() << "> cannot execute " << this->name << " because ";
		std::cerr << e.what() << '\n';
	}
}
