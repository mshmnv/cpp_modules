.PHONY: all clean fclean re

NAME = brain

SRC = Brain.cpp Human.cpp

SRCO = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

HEADER = Brain.hpp Human.hpp

all: $(NAME)

$(NAME): $(SRCO) main.cpp
		clang++ $(FLAGS) main.cpp $(SRCO) -o $(NAME)

clean:
		rm -f $(SRCO)

fclean: clean
		rm -f $(NAME)

re: fclean all