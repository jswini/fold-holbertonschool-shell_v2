CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -g
SRC = hsh.c str_funcs.c
OBJ $(SRC:.c=.o)
NAME = hsh
RM = rm -f

all: $(NAME)

$(OBJ): %.o: %.c
	${CC} ${CFLAGS} -c -o $@ $<
