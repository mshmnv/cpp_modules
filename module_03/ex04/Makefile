.PHONY: all clean fclean re

NAME = supertrap

SRC = FragTrap.cpp  ScavTrap.cpp ClapTrap.cpp NinjaTrap.cpp SuperTrap.cpp

SRCO = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = FragTrap.hpp  ScavTrap.hpp ClapTrap.hpp NinjaTrap.hpp SuperTrap.hpp

all: $(NAME)

$(NAME): $(SRCO) main.cpp $(HEADER)
		clang++ $(FLAGS) main.cpp $(SRCO) -o $(NAME)

clean:
		rm -f $(SRCO)

fclean: clean
		rm -f $(NAME)

re: fclean all