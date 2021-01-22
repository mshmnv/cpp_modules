.PHONY: all clean fclean re

NAME = convert

SRC =  Cast.cpp

SRCO = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = Cast.hpp

all: $(NAME)

$(NAME): $(SRCO) main.cpp $(HEADER)
		clang++ $(FLAGS) main.cpp $(SRCO) -o $(NAME)

clean:
		rm -f $(SRCO)

fclean: clean
		rm -f $(NAME)

re: fclean all