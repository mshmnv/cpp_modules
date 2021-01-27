/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 22:13:17 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/27 13:48:42 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n) : _size(n), _filled(0) { }

Span::Span(Span const & src) {
	*this = src;
}

Span::~Span() {
	
}

void	Span::addNumber(int num) {
	try {
		if (this->_filled == this->_size)
			throw FullContainerException();
		this->_container.push_back(num);
		this->_filled += 1;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

int		Span::shortestSpan() {
	if (this->_filled < 2)
		throw ToSmallSizeException();
	std::vector<int>::iterator it = this->_container.begin();
	std::vector<int>::iterator ite = this->_container.end();
	int shortest = std::abs(*it - *(it + 1));
	it++;
	for (; (it + 1) != ite; it++) {
		if (shortest > std::abs((*it - *(it + 1))))
			shortest = std::abs(*it - *(it + 1));
	}
	return (shortest);
}

int		Span::longestSpan() {
	if (this->_filled < 2)
		throw ToSmallSizeException();
	std::vector<int>::iterator minEl = std::min_element(this->_container.begin(), this->_container.end());
	std::vector<int>::iterator maxEl = std::max_element(this->_container.begin(), this->_container.end());
	return (*maxEl - *minEl);

}

Span&	Span::operator=(Span const & src) {
	this->_size = src._size;
	this->_container = src._container;
	this->_filled = src._filled;
	return *this;
}

/*
**	EXCEPTION
*/

const char*	Span::FullContainerException::what() const throw() {
	return "Container is Full";
}

const char*	Span::ToSmallSizeException::what() const throw() {
	return "Container is too small";
}
