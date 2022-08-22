.PHONY:	 all clean fclean re

NAME = ex00

SRC = Bureaucrat.cpp main.cpp

HEADER = Bureaucrat.hpp

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

