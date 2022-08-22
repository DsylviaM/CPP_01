.PHONY:	 all clean fclean re

NAME = ex01

SRC = Bureaucrat.cpp main.cpp Form.cpp

HEADER = Bureaucrat.hpp Form.hpp

FLAGS = -Wall -Wextra -Werror -g -std=c++98

CLANG = clang++

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

