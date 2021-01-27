/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 22:13:27 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/27 13:54:20 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
private:
	Span();
	unsigned int		_size;
	unsigned int		_filled;
	std::vector<int>	_container;

public:
	Span(unsigned int n);
	Span(Span const & src);
	~Span();

	Span& operator=(Span const & src);

	class FullContainerException : public std::exception {
		public:
			virtual const char* what() const throw();
	};
	class ToSmallSizeException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

	void	addNumber(int num);

	template<typename T>
	void	addNumber(T& another) {
			this->_filled = this->_size - this->_filled;
			if (this->_filled == 0)
				throw FullContainerException();
			this->_container = another;
			this->_size = another.size();
	}

	int		shortestSpan();
	int		longestSpan();
	
	
};



#endif