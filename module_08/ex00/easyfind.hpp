/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 21:37:34 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/27 15:13:48 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

class NotFoundException : public std::exception {
	public :
		virtual const char* what() const throw() {
			return ("Element is not found");
		}
};

template< typename T>
int& easyfind(T& container, int toFind) {
	typename T::iterator item;
	if ((item = std::find(container.begin(), container.end(), toFind)) == container.end())
		throw NotFoundException();
	return (*item);
}

#endif