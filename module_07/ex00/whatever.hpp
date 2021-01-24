/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 19:40:40 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/24 20:34:49 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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