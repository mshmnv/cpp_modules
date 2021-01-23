/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 17:35:14 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/23 09:08:30 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAST_HPP
#define CAST_HPP


#define CHAR 	0
#define INT		1
#define FLOAT	2
#define DOUBLE	3
#define LIMITS	4
// other & error

#include <iostream>

class Cast {

private:
	Cast();
	std::string _value;
	int			_type;

public:
	Cast(std::string const & value);
	Cast(Cast const & src);
	~Cast();

	void	detect_type();

	Cast&	operator=(Cast const& src);

	void	printLimits();
	void	printFromChar();
	void	printFromInt();
	void	printFromFloat();
	void	printFromDouble();

	void	print();


};

#endif