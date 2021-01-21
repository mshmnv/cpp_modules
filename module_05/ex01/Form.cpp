/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 16:08:25 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/20 14:21:42 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form(std::string name, int gradeToSign, int gradeToExecute)
	: name(name) , isSigned(false) , gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

Form::Form(Form const & src)
		: name(src.name), isSigned(src.isSigned), gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute) {
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

Form::~Form() {
	
}

std::string		Form::getName() const {
	return this->name;
}

bool			Form::getIsSigned() const {
	return this->isSigned;
}

int				Form::getGradeToSign() const {
	return this->gradeToSign;
}
int				Form::getGradeToExecute() const {
	return this->gradeToExecute;
}


void			Form::beSigned(Bureaucrat const & man) {
	if (man.getGrade() > this->gradeToSign)
		throw GradeTooLowException();
	else if (this->isSigned)
		throw FormIsSignedException();
	else
		this->isSigned = true;
}

/*
** EXCEPTIONS
*/

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

const char* Form::FormIsSignedException::what() const throw() {
	return "Form is already signed";
}

/*
** OVERLOADS
*/

Form&		Form::operator=(Form const & src) {
	this->isSigned = src.isSigned;	
	return *this;
}

std::ostream& operator<<(std::ostream& out, Form const & src) {
	out << "Form <" << src.getName();
	out << "Required: " << src.getGradeToSign() << " grade to sign | " << src.getGradeToExecute() << " grade to execute.";
	if (src.getIsSigned())
		out << "Form is signed." << std::endl;
	else
		out << "Form is not signed." << std::endl;
	return out;
}