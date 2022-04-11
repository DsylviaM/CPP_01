CC			=c++
CFLAGS		= -c -Wall -Wextra -Werror --std=c++98
SOURCES		=main.cpp ZombieHorde.cpp Zombie.cpp
OBJECTS		=$(SOURCES:.cpp=.o)
HEADERS		=Zombie.hpp
EXECUTABLE	=Zombie

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS) $(HEADERS)
	@$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o: $(HEADERS)
	@$(CC) $(CFLAGS) $< -o $@

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(EXECUTABLE)

re: fclean all

.PHONY: re fclean all clean