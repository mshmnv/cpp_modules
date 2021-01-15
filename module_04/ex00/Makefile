.PHONY: all clean fclean re

NAME = sorcerer

SRC = Sorcerer.cpp Victim.cpp Peon.cpp

SRCO = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = Sorcerer.hpp Victim.hpp Peon.hpp

all: $(NAME)

$(NAME): $(SRCO) main.cpp $(HEADER)
		clang++ $(FLAGS) main.cpp $(SRCO) -o $(NAME)

clean:
		rm -f $(SRCO)

fclean: clean
		rm -f $(NAME)

re: fclean all