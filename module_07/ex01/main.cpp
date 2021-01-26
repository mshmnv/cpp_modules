/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 20:33:39 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/25 16:40:54 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome {
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }	
private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) {
	o << rhs.get();
	return o;
}

template< typename T >
void print( T const & x ) {
	std::cout << x << std::endl;
	return;
}


void increment(int& c) {
	c += 1;
}

void printing(int c) {
	std::cout << c << " ";
}

int main() {

	int arrInt[] = {1, 2, 3, 4, 5};
	
	::iter(arrInt, 5, printing);
	std::cout << std::endl;
	::iter(arrInt, 5, increment);
	::iter(arrInt, 5, printing);

	std::cout << "\n\nAwesome" << std::endl;
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];
	iter( tab, 5, print<int> );
	iter( tab2, 5, print<Awesome> );
	
	return 0;
}