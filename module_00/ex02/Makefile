.PHONY: all clean fclean re

NAME = account

SRC = Account.class.cpp

SRCO = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

HEADER = Account.class.hpp

all: $(NAME)

$(NAME): $(SRCO) tests.cpp
		clang++ $(FALGS) tests.cpp $(SRCO) -o $(NAME)

clean:
		rm -f $(SRCO)

fclean: clean
		rm -f $(NAME)

re: fclean all