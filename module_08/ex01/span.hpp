/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 22:13:27 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/25 23:29:20 by lbagg            ###   ########.fr       */
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

	void	addNumber(int num);
	int		shortestSpan();
	int		longestSpan();
	
	class FullContainerException : public std::exception {
		public:
			virtual const char* what() const throw();
	};
	class ToSmallSizeException : public std::exception {
		public:
			virtual const char* what() const throw();
	};
};



#endif