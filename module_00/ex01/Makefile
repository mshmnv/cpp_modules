.PHONY: all clean fclean re

NAME = open_phonebook

SRC = Phonebook.class.cpp Contact.class.cpp

SRCO = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

HEADER = Phonebook.class.hpp Contact.class.hpp

all: $(NAME)

$(NAME): $(SRCO) main.cpp
		clang++ $(FALGS) main.cpp $(SRCO) -o $(NAME)

clean:
		rm -f $(SRCO)

fclean: clean
		rm -f $(NAME)

re: fclean all