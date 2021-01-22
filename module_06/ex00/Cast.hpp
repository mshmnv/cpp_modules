/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 17:35:14 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/22 21:31:51 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAST_HPP
#define CAST_HPP


#define CHAR 	0
#define INT		1
#define FLOAT	2
#define DOUBLE	3
// other & error

#include <iostream>

class Cast {

private:
	Cast();
	std::string _value;

public:
	Cast(std::string const & value);
	Cast(Cast const & src);
	~Cast();

	Cast&	operator=(Cast const& src);

	void	printCharValue();
	void	printIntValue();
	void	printFloatValue();
	void	printDoubleValue();

	void	detect_type();

};

#endif