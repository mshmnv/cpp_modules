.PHONY: all clean fclean re

NAME = weapons

SRC = Weapon.cpp HumanA.cpp HumanB.cpp

SRCO = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

HEADER = Weapon.hpp HumanA.hpp HumanB.hpp

all: $(NAME)

$(NAME): $(SRCO) main.cpp
		clang++ $(FLAGS) main.cpp $(SRCO) -o $(NAME)

clean:
		rm -f $(SRCO)

fclean: clean
		rm -f $(NAME)

re: fclean all