.PHONY:	 all clean fclean re

NAME = animal03

SRC = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

HEADER = AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp

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
