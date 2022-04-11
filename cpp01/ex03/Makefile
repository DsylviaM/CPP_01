CC			=c++
CFLAGS		= -c -Wall -Wextra -Werror --std=c++98 -pedantic
SOURCES		=main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJECTS		=$(SOURCES:.cpp=.o)
HEADERS		=HumanA.hpp HumanB.hpp Weapon.hpp
EXECUTABLE	=exec

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