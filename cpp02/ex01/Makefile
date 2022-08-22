NAME		=	ex01

CC			=	c++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

SRC			=	$(wildcard *.cpp)

OBJ      	=  	$(SRC:.cpp=.o)

RM			=	rm -rf

all			:	$(NAME)

%.o			:   %.cpp
				$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $?

$(NAME)		:	$(SRC)
				$(CC) $(CFLAGS) $(SRC) -o $@

clean		:
				$(RM) $(OBJ)

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all
