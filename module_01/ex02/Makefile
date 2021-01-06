.PHONY: all clean fclean re

NAME = zombie

SRC = Zombie.cpp ZombieEvent.cpp

SRCO = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

HEADER = Zombie.hpp ZombieEvent.hpp

all: $(NAME)

$(NAME): $(SRCO) main.cpp
		clang++ $(FLAGS) main.cpp $(SRCO) -o $(NAME)

clean:
		rm -f $(SRCO)

fclean: clean
		rm -f $(NAME)

re: fclean all