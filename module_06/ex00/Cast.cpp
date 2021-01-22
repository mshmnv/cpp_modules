/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 17:37:43 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/22 21:36:48 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

std::string limits[8] = {"inff", "+inff", "-inff", "nanf", "inf", "+inf", "-inf", "nan"};

// inf: if (float value - static_cast<int<(value) == 0.0))  -> +.0

Cast::Cast(std::string const & value) : _value(value) { }

Cast::Cast(Cast const & src) : _value(src._value) { }

Cast::~Cast() { }

void	Cast::detect_type() {
	
}

void	Cast::printCharValue() {
	int c;

	if (this->_value.length() == 1)
		if (isalpha(this->_value.at(0)))
		{
			std::cout << "'" << this->_value.at(0) << "'";
			return ;
		}
	if (isnumber(this->_value.at(0)))
	{	
		c = static_cast<int>(this->_value);
		std::cout << c;
	}
	
	if (c < 0 || c > 127)
		std::cout << "impossible";
	else if (c < 33 || c > 126)
		std::cout << "Non displayabal";
	else
		std::cout << "'" << c << "'";
}

void	Cast::printIntValue() {
	int i;
	try
	{
		i = stoi(this->_value);
	}
	catch (std::exception &e)
	{
		std::cout << "impossible";
		return ;
	}
	std::cout << i;
}

void	Cast::printFloatValue() {
	float f;


	try
	{
		f = stof(this->_value);
	}
	catch (std::exception &e)
	{
		std::cout << "impossible";
		return ;
	}
	for (int i = 0; i < 8; i++)
		if(limits[i] == this->_value)
		{
			std::cout << static_cast<float>(f) << "f";
			return ;
		}
	std::cout << (f);
	if (this->_value.find('.') == -1)
		std::cout << ".0";
	std::cout << "f";
}

void	Cast::printDoubleValue() {
	double d;
	
	try
	{
		d = stod(this->_value);
	}
	catch (std::exception &e)
	{
		std::cout << "impossible";
		return ;
	}
	for (int i = 0; i < 8; i++)
		if(limits[i] == this->_value)
		{
			std::cout << (d);
			return ;
		}
	std::cout << (d);
	if (this->_value.find('.') == -1)
		std::cout << ".0";
}

Cast&	Cast::operator=(Cast const& src) {
	this->_value = src._value;
	return (*this);
}
