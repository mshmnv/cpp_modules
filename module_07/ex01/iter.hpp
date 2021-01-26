/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 20:33:06 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/25 16:32:23 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template< typename T, typename L, typename F>
void iter(T* array, L length , F func) {

	for (int i = 0; i < length; i++)
		func(*(array + i));

}

#endif