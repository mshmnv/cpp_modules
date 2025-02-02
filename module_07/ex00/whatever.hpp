/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 19:40:40 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/25 16:12:36 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template< typename T >
T const &	max(T const & x, T const & y) {
	return (x >= y ? x : y);
}

template< typename T >
T const &	min(T const & x, T const & y) {
	return (x <= y ? x : y);
}

template< typename T >
void		swap(T & x, T & y) {
	T save = x;
	x = y;
	y = save;
}

#endif