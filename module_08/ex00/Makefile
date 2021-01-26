.PHONY: all clean fclean re

NAME = easyfind

FLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = easyfind.hpp

all: $(NAME)

$(NAME): main.cpp $(HEADER)
		clang++ $(FLAGS) main.cpp -o $(NAME)

clean:
		rm -f $(SRCO)

fclean: clean
		rm -f $(NAME)

re: fclean all