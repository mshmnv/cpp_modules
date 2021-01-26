/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 16:43:04 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/25 21:13:37 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array {

private:
	T*	_array;
	int	_length;

public:
	Array();
	Array(unsigned int n);
	Array(Array<T> const &src);
	virtual ~Array();

	Array&	operator=(Array<T> const & src);
	T&		operator[](int index);
	
	int		size() const;

	class OutOfArrayException : public std::exception {
		public:
			virtual const char* what() const throw();
	};
};

template<typename T>
Array<T>::Array() : _array(NULL), _length(0) { }

template<typename T>
Array<T>::Array(unsigned int n) {
	this->_array = new T[n];
	this->_length = n;
}

template<typename T>
Array<T>::Array(Array<T> const &src) : _array(NULL), _length(0) {
	*this = src;
}

template<typename T>
Array<T>::~Array() {
	if (this->_length)
		delete[] this->_array;
}

template<typename T>
int		Array<T>::size() const {
	return this->_length;
}

/*
**	OVERLOADS
*/

template<typename T>
Array<T> & Array<T>::operator=(Array<T> const & src) {
	if (this->_length)
		delete[] this->_array;	
	this->_array = NULL;
	this->_length = src._length;
	if (src._length > 0)
	{
		this->_array = new T[src._length];
		for (int i = 0; i < src._length ; i++)
			this->_array[i] = src._array[i];
	}
	return (*this);
}

template<typename T>
T&		Array<T>::operator[](int index) {
	if (index < this->_length && index >= 0)
		return (this->_array[index]);
	else
		throw OutOfArrayException();
}

/*
**	EXCEPTION
*/

template<typename T>
const char* Array<T>::OutOfArrayException::what() const throw() {
	return "Trying to access index out of array";
}

#endif