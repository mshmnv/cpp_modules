/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 00:14:07 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/08 02:18:15 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int		error(std::string message)
{
	std::cout << message << std::endl;
	return 1;
}

int main( int argc, char **argv ) {

	if (argc != 4)
		return error("Wrong number of arguments!");
	std::string s1 = argv[1];
	if (s1.length() == 0)
		return error("First string can't be empty");
	std::string s2 = argv[2];
	std::string fname = argv[3];
	std::ifstream fin(fname);
	if (!fin)
		return error("Input file can't be opened");
	std::ofstream fout(fname + ".replace");
	if (!fout)
	{
		fin.close();
		return error("Output file can't be opened");
	}

	std::string		str;
	std::size_t		pos;

	for (getline(fin, str); !fin.eof(); getline(fin, str))
	{
		for (pos = str.find(s1); pos != std::string::npos; pos = str.find(s1))
			str.replace(pos, s1.length(), s2);
		fout << str << std::endl;
	}
	for (pos = str.find(s1); pos != std::string::npos; pos = str.find(s1))
		str.replace(pos, s1.length(), s2);
	fout << str;

	fin.close();
	fout.close();
	return 0;
}