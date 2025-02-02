/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 11:41:18 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/24 11:39:57 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cast.hpp"

int main(int argc, char** argv) {
	if (argc != 2)
	{
		std::cout << "Print this: " << argv[0] << " < value >" << std::endl;
		return 0;
	}
	
	Cast cast(argv[1]);
	cast.print();
	return 0;
}