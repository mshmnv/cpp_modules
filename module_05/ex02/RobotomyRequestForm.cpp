/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 18:45:01 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/20 13:00:21 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45, target) {
	
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src) {

}

RobotomyRequestForm::~RobotomyRequestForm() {
	
}
void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	try
	{
		Form::execute(executor);
		srand(time(NULL));
		if (std::rand() % 2)
			std::cout << "<" << this->target << ">  has been robotomized" << std::endl;
		else
			std::cout << "<" << this->target << ">  failed to be robotomized" << std::endl;
	
	}
	catch(const std::exception& e)
	{	
		std::cerr << "<"<< executor.getName() << "> cannot execute " << this->name << " because ";
		std::cerr << e.what() << '\n';
	}
	
}