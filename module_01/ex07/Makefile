.PHONY: all clean fclean re

NAME = replace

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): main.cpp
		clang++ $(FLAGS) main.cpp -o $(NAME)

clean:
		rm -f $(NAME)

fclean: clean

re: fclean all