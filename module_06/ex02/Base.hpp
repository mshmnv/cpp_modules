/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 12:21:44 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/24 12:37:42 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

class Base {

private:

public:
	virtual ~Base() { };
};

class A: public Base {
	virtual ~A() {};
};

class B: public Base {
	virtual ~B() {};
};

class C: public Base {
	virtual ~C() {};
};


#endif