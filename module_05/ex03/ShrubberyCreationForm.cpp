/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 18:40:05 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/19 23:51:04 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

int					numStr = 14;
std::string	const	tree[] = {
"        # #### ####\n",
"      ### \\/#|### |/####\n",
"     ##\\/#/ \\||/##/_/##/_#\n",
"   ###  \\/###|/ \\/ # ###\n",
" ##_\\_#\\_\\## | #/###_/_####\n",
"## #### # \\ #| /  #### ##/##\n",
" __#_--###`  |{,###---###-~\n",
"           \\ }{\n",
"            }}{\n",
"            }}{\n",
"            {{}\n",
"      , -=-~{ .-^- _\n",
"            `}\n",
"             {\n"
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137, target) {
	
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src) {
	
}
ShrubberyCreationForm::~ShrubberyCreationForm() {
	
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	try
	{
		Form::execute(executor);
		std::ofstream  fout(this->target + "_shrubbery");
		for (int i = 0; i < numStr; i++)
			fout << tree[i];
	}
	catch(const std::exception& e)
	{	
		std::cerr << "<"<< executor.getName() << "> cannot execute " << this->name << " because ";
		std::cerr << e.what() << '\n';
	}

}

