/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 17:37:43 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/24 22:20:27 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

std::string limits[8] = {"+inff", "-inff", "nanf", "+inf", "-inf", "nan"};

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
	if (this->_value.length() == 1 && !isdigit(this->_value.at(0)))
		this->_type = CHAR;
	else if (this->_value.find(".") == std::string::npos && this->_value.find("f") == std::string::npos)
	{
		int i = 0;
		if (this->_value[i] == '+' || this->_value[i] == '-')
			i++;
		while (this->_value[i])
		{
			if (!isdigit(this->_value[i]))
				return ;
			i++;
		}
		this->_type = INT;
	}
	else if (this->_value.find('f') != std::string::npos)
	{
		int i = 0;
		if (this->_value[i] == '+' || this->_value[i] == '-')
			i++;
		while (this->_value[i] != 'f')
		{
			if (!isdigit(this->_value[i]) && this->_value[i] != '.')
				return ;
			i++;
		}
		this->_value = this->_value.substr(0, this->_value.find("f"));
		this->_type = FLOAT;
	}
	else
		this->_type = DOUBLE;
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
	else
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	
}

void	Cast::printLimits() {
	if (this->_value == "+inff" || this->_value == "-inff" || this->_value == "nanf")
		this->_value = this->_value.substr(0, this->_value.find_last_of("f"));
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: " << this->_value << "f" << std::endl;
	std::cout << "double: " << this->_value << std::endl;
}

void	Cast::printFromChar() {
	int c = static_cast<int>(this->_value.at(0));
	
	if (isprint(c))
		std::cout << "char: '" << static_cast<char>(c) << "'" << std::endl;
	else
		std::cout << "char: Non displayabal" << std::endl;
	std::cout << "int: " << c << std::endl;
	std::cout << "float: " << c << ".0f" << std::endl;
	std::cout << "double: " << c << ".0" << std::endl;
}

void	Cast::printFromInt() {
	int i;
	std::stringstream s(this->_value);
	
	s >> i;
	if (isprint(i))
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void	Cast::printFromFloat() {
	std::stringstream s(this->_value);
	float f;

	s >> f;
	if (isprint(static_cast<int>(f)))
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: " << f;
	if ((f - static_cast<int>(f)) == 0.0)
		std::cout << ".0";
	std::cout << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f);
	if ((f - static_cast<int>(f)) == 0.0)
		std::cout << ".0";
	std::cout << std::endl;
}

void	Cast::printFromDouble() {
	std::stringstream s(this->_value);
	double d;

	s >> d;
	if (isprint(static_cast<int>(d)))
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << static_cast<float>(d);
	if ((d - static_cast<int>(d)) == 0.0)
		std::cout << ".0";
	std::cout << "f" <<  std::endl;
	std::cout << "double: " << d;
	if ((d - static_cast<int>(d)) == 0.0)
		std::cout << ".0";
	std::cout << std::endl;
}

Cast&	Cast::operator=(Cast const& src) {
	this->_value = src._value;
	this->_type = src._type;
	return (*this);
}
