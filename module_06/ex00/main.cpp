/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 11:41:18 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/21 22:27:14 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// int a = static_cast<int>(b);

// dynamic_cats<>();

// reinterpret_cast<>();
// для приведения несовместимых типов
// целое число к указателю
// указатель к целому числу
// указатель к указателю (это же касается и ссылок)
//NO int->double


// int a = 42;
// int const* b = &a;
// int* d = const_cast<int *>(b);
// 1-снять конст, 2-добавить конст


//cast operators
//explicit keyword

int main(int argc, char** argv) {
	if (argc == 1)
		return 0;
	std::string arg = argv[1];
	std::cout << "char:" << static_cast<char>(argv[1]) << std::endl;
	std::cout << "int:" << static_cast<int>(arg) << std::endl;
	std::cout << "float:" << static_cast<float>(arg) << std::endl;
	std::cout << "double:" << static_cast<double>(arg) << std::endl;
	
	return 0;
}