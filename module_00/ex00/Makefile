.PHONY: all clean fclean re

NAME = megaphone

SRC = megaphone.cpp

SRCO = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCO)
		@clang++ $(FLAGS) $(SRCO) -o $(NAME)

clean:
		@rm -f $(SRCO)

fclean: clean
		@rm -f $(NAME)

re: fclean all