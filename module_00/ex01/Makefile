.PHONY: all clean fclean re

NAME = phonebook

SRC = main.cpp

SRCO = $(SRC:.cpp=.o)

HEADER = Phonebook.hpp

all: $(NAME)

$(NAME): $(SRCO) Phonebook.hpp
		@clang++ $(SRCO) -I $(HEADER) -o $(NAME) 

clean:
		@rm -f $(SRCO)

fclean: clean
		@rm -f $(NAME)

re: fclean all