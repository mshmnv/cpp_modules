#include <iostream>
#include "Phonebook.hpp"

int	main(int argc, char **args) {

	Phonebook	redBook;
	std::string	cmd;

	while (21) {
		std::cout << "Enter one of the commands: ADD | SEARCH | EXIT" << std::endl;
		std::cin >> cmd;
		if (cmd == "ADD")
			redBook.add();
		else if (cmd == "SEARCH")
			redBook.search();
		else if (cmd == "EXIT")
			break ;
	}
	return 0;
}