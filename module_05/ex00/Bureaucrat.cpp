/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 15:36:26 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/19 16:49:18 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade){
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : name(src.name), grade(src.grade) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}


Bureaucrat::~Bureaucrat() {
	
}

std::string 		Bureaucrat::getName() const {
	return this->name;
}
int					Bureaucrat::getGrade() const {
	return this->grade;
}
void				Bureaucrat::incrementGrade() {
	grade -= 1;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}
void				Bureaucrat::decrementGrade() {
	grade += 1;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

/*
** EXCEPTIONS
*/

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Exception: Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Exception: Grade is too low";
}

/*
** OVERLOADS
*/

Bureaucrat&		Bureaucrat::operator=(Bureaucrat const & src) {
	this->grade = src.grade;
	return (*this);
}

std::ostream&	operator<<(std::ostream & out, Bureaucrat const & src) {
	out << "<" << src.getName() << ">,  bureaucrat grade <" << src.getGrade() << ">" << std::endl;
	return out;
}
