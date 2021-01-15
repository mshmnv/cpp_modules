.PHONY: all clean fclean re

NAME = sorcerer

SRC = AWeapon.cpp PlasmaRifle.cpp PowerFist.cpp

SRCO = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = AWeapon.hpp PlasmaRifle.hpp PowerFist.hpp

all: $(NAME)

$(NAME): $(SRCO) main.cpp $(HEADER)
		clang++ $(FLAGS) main.cpp $(SRCO) -o $(NAME)

clean:
		rm -f $(SRCO)

fclean: clean
		rm -f $(NAME)

re: fclean all