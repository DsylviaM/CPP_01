.PHONY:	 all clean fclean re

NAME = ex01

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

HEADER = Animal.hpp Dog.hpp Cat.hpp Brain.hpp

FLAGS = -Wall -Wextra -Werror -g -std=c++98

CLANG = c++

RM = rm -f

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
		$(CLANG) $(FLAGS) -c $< -o $@
$(NAME): $(OBJ) $(HEADER)
		 $(CLANG) $(OBJ) -o $(NAME)

all:	$(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re:		fclean all
