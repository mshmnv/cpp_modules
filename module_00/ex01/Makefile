.PHONY: all clean fclean re

NAME = phonebook

SRC = phonebook.cpp

SRCO = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(SRCO)
		@clang++ $(SRCO) -o $(NAME)

clean:
		@rm -f $(SRCO)

fclean: clean
		@rm -f $(NAME)

re: fclean all