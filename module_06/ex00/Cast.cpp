/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 17:37:43 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/23 11:55:01 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

std::string limits[8] = {"+inff", "-inff", "nanf", "+inf", "-inf", "nan"};

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
	{
		if (!isdigit(this->_value.at(0)))
		{
			this->_type = CHAR;
			return ;
		}
	}
	else if (this->_value.find('.') == std::string::npos && this->_value.find('f') == std::string::npos)
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
	// std::cout << "!!!!";

}


void	Cast::print() {
	if (this->_type == LIMITS)
		return printLimits();
	else if (this->_type == CHAR)
		return printFromChar();
	else if (this->_type == INT)
		return printFromInt();
	else if (this->_type == FLOAT)
		return printFromFloat();
	else if (this->_type == DOUBLE)
		return printFromDouble();

}

void	Cast::printLimits() {
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: " << this->_value;
	if (this->_value != "+inff" && this->_value != "-inff" && this->_value != "nanf")
		std::cout << "f" << std::endl;
	else
		std::cout << std::endl;
	std::cout << "double: " << this->_value << std::endl;

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

}

void	Cast::printFromDouble() {

}

Cast&	Cast::operator=(Cast const& src) {
	this->_value = src._value;
	this->_type = src._type;
	return (*this);
}
