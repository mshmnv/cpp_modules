.PHONY: all clean fclean re

NAME = base

FLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = Base.hpp

all: $(NAME)

$(NAME): main.cpp $(HEADER)
		clang++ $(FLAGS) main.cpp -o $(NAME)

clean:
		rm -f $(SRCO)

fclean: clean
		rm -f $(NAME)

re: fclean all