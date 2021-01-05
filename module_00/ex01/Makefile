.PHONY: all clean fclean re

NAME = phonebook

SRC = Phonebook.cpp Contact.cpp

SRCO = $(SRC:.cpp=.o)

HEADER = Phonebook.hpp Contact.hpp

all: $(NAME)

$(NAME): $(SRCO) main.cpp
		clang++ main.cpp $(SRCO) -o $(NAME) 

clean:
		rm -f $(SRCO)

fclean: clean
		rm -f $(NAME)

re: fclean all