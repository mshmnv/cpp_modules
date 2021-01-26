.PHONY: all clean fclean re

NAME = array

FLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = Array.hpp

all: $(NAME)

$(NAME): main.cpp $(HEADER)
		clang++ $(FLAGS) main.cpp -o $(NAME)

clean:
		rm -f $(NAME)

fclean: clean
		rm -f $(NAME)

re: fclean all