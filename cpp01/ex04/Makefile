CC			=c++
CFLAGS		= -c -Wall -Wextra -Werror --std=c++98 -pedantic
SOURCES		=main.cpp Replace.cpp
OBJECTS		=$(SOURCES:.cpp=.o)
HEADERS		=Replace.hpp
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