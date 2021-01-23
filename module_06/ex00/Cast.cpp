/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 17:37:43 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/23 09:53:20 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

std::string limits[8] = {"inff", "+inff", "-inff", "nanf", "inf", "+inf", "-inf", "nan"};

// inf: if (float value - static_cast<int<(value) == 0.0))  -> +.0

Cast::Cast(std::string const & value) : _value(value), _type(-1) { this->detect_type(); }

Cast::Cast(Cast const & src) { *this = src; }

Cast::~Cast() { }

void	Cast::detect_type() {
	for (int i = 0; i < 8; i++)
		if (limits[i] == this->_value)
		{
			this->_type = LIMITS;
			return ;
		}
	if (this->_value.length() == 1)
		if (!isdigit(this->_value.at(0)))
		{
			this->_type = CHAR;
			return ;
		}
	else if (this->_value.find('.') == std::string::npos)
	{
			this->_type = INT;
			return ;
	}
	else if (this->_value.find('f') != std::string::npos)
	{
			this->_type = FLOAT;
			return ;
	}
	else
		this->_type = DOUBLE;

}


void	Cast::print() {
	if (this->_type == LIMITS)
		printLimits();
	if (this->_type == CHAR)
		printFromChar();
	else if (this->_type == INT)
		printFromInt();
	// else if (this->_type == FLOAT)
	// 	printFromFloat();
	// else if (this->_type == DOUBLE)
	// 	printFromDouble();
}

void	printLimits() {
	// std::cout << 
}

void	Cast::printFromChar() {
	int c = static_cast<int>(this->_value.at(0));
	
	std::cout << "char: ";
	if (!isprint(c))
		std::cout << "Non displayabal" << std::endl;
	else
		std::cout << "'" << static_cast<char>(c) << "'" << std::endl;
	std::cout << "int: " << c << std::endl;
	std::cout << "float: " << c << ".0f" << std::endl;
	std::cout << "double: " << c << ".0" << std::endl;
}

void	Cast::printFromInt() {
	
}

void	Cast::printFromFloat() {
// 	float f;


// 	try
// 	{
// 		f = stof(this->_value);
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout << "impossible";
// 		return ;
// 	}
// 	for (int i = 0; i < 8; i++)
// 		if(limits[i] == this->_value)
// 		{
// 			std::cout << static_cast<float>(f) << "f";
// 			return ;
// 		}
// 	std::cout << (f);
// 	if (this->_value.find('.') == -1)
// 		std::cout << ".0";
// 	std::cout << "f";
}

void	Cast::printFromDouble() {
// 	double d;
	
// 	try
// 	{
// 		d = stod(this->_value);
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout << "impossible";
// 		return ;
// 	}
// 	for (int i = 0; i < 8; i++)
// 		if(limits[i] == this->_value)
// 		{
// 			std::cout << (d);
// 			return ;
// 		}
// 	std::cout << (d);
// 	if (this->_value.find('.') == -1)
// 		std::cout << ".0";
}

Cast&	Cast::operator=(Cast const& src) {
	this->_value = src._value;
	this->_type = src._type;
	return (*this);
}
