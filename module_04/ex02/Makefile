.PHONY: all clean fclean re

NAME = sorcerer

SRC = AssaultTerminator.cpp Squad.cpp TacticalMarine.cpp

SRCO = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = AssaultTerminator.hpp ISpaceMarine.hpp ISquad.hpp Squad.hpp TacticalMarine.hpp

all: $(NAME)

$(NAME): $(SRCO) main.cpp $(HEADER)
		clang++ $(FLAGS) main.cpp $(SRCO) -o $(NAME)

clean:
		rm -f $(SRCO)

fclean: clean
		rm -f $(NAME)

re: fclean all