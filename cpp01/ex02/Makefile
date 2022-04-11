CC			=c++
CFLAGS		= -c -Wall -Wextra -Werror --std=c++98 -pedantic
SOURCES		=main.cpp
OBJECTS		=$(SOURCES:.cpp=.o)
EXECUTABLE	=exe

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	@$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	@$(CC) $(CFLAGS) $< -o $@

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(EXECUTABLE)

re: fclean all

.PHONY: re fclean all clean