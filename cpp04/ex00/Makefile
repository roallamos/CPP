NAME = test

CC = g++

AR = ar

CFLAGS = -Wall -Werror -Wextra -std=c++98

ARFLAGS  = -rcs

SOURCES = main.cpp Animal.cpp Cat.cpp Dog.cpp

OBJECTS = $(SOURCES:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME)	: $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f ${NAME}

all: ${NAME}

re: fclean all

.PHONY: all clean fclean re

