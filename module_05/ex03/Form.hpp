/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 16:08:43 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/19 23:50:18 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form {

private:
	Form();

protected:
	std::string	const	name;
	bool				isSigned;
	int			const	gradeToSign;
	int			const	gradeToExecute;
	std::string			target;
	
public:
	Form(std::string name, int gradeToSign, int gradeToExecute, std::string target);
	Form(Form const & src);
	virtual ~Form();

	std::string		getName() const;
	bool			getIsSigned() const;
	int				getGradeToSign() const;
	int				getGradeToExecute() const;
	void			beSigned(Bureaucrat const & man);
	virtual void	execute(Bureaucrat const & executor) const;
	
	Form& operator=(Form const & src);
	
	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw();
	};
	class FormIsSignedException : public std::exception {
		public:
			virtual const char* what() const throw();
	};
	class FormIsNotSignedException : public std::exception {
		public:
			virtual const char* what() const throw();
	};	
};

std::ostream& operator<<(std::ostream& out, Form const & src);

#endif