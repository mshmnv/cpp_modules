#include <iostream>

int	main(int argc, char **args)
{
	int	i;
	int	j;

	i = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (argc > 1)
	{
		while (args[++i])
		{
			j = -1;
			std::string str = args[i];
			while (str[++j])
			{
					std::cout << (char)std::toupper(str[j]);
				break ;
			}
		}
		std::cout << std::endl;
	}
	return (0);
}