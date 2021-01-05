/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 22:09:48 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/05 22:09:49 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (argc > 1)
	{
		for (int i = 1; argv[i]; i++)
			for (int j = 0;  argv[i][j] ; j++)
				std::cout << (char)std::toupper(argv[i][j]);
		std::cout << std::endl;
	}
	return 0;
}