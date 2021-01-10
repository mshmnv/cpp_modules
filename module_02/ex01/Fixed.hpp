/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 23:57:37 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/10 17:23:51 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

public:
	Fixed();
	Fixed(const int i);
	Fixed(const float f);
	Fixed(Fixed const & src);
	~Fixed();

	Fixed&	operator=(Fixed const & src);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	float	toFloat( void ) const;
	int		toInt( void ) const;

private:
	int 				_value;
	static const int	_bits = 8;

};

std::ostream& operator<<(std::ostream &o, Fixed const & src);

#endif
