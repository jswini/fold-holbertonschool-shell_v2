CC = gcc
SRC = _strndup.c bi_chdir.c bi_exit.c bi_set_env.c bi_unset_env.c \
	build_array.c check_built_ins.c create_env_node.c delete_env_node.c \
	fill_array.c find_command.c find_path.c free_env_list.c free_path_list.c \
	get_key.c 	get_pwd.c get_value.c hsh.c parse_args.c path_llist.c \
	print_env.c prompt.c str_funcs.c tokenizer.c
OBJ = ${SRC:.c=.o}
NAME = hsh
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -pedantic

all: $(OBJ)
	$(CC) ${CFLAGS} $(OBJ) -o $(NAME)

clean:
	$(RM) *~ $(NAME)

oclean:
	$(RM) $(OBJ)

fclean: clean oclean

re: oclean all
