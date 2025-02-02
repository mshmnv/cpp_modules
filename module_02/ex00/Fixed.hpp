/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 23:57:37 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/09 14:20:49 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

public:
	Fixed();
	Fixed(Fixed const & src);
	~Fixed();

	Fixed&	operator=(Fixed const & src);


	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

private:
	int _rawBits;
	static const int bits = 8;

};

#endif
