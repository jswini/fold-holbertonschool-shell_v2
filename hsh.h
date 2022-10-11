#ifndef HSH_H
#define HSH_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * struct pathlist_s - struct for putting PATH into a linked list
 * @file_path: the PATH
 * @next: pointer to next node
 */
typedef struct pathlist_s
{
	char *file_path;
	struct pathlist_s *next;
} path_t;


/**
 * struct environment_s - holds key value pairs for env list
 * @key: key value for env list
 * @value: value of env list
 * @next: pointer to the next node
 * @prev: pointer to the prev node
 */
typedef struct environment_s
{
	char *key;
	char *value;
	struct environment_s *next;
	struct environment_s *prev;
} env_t;

/**
 * struct builtin_s - function pointer design struct
 * @builtin_name: name of builtin to check
 * @func: function prototype structure for builtins
 */
typedef struct builtin_s
{
	char *builtin_name;
	int (*func)(env_t *builtin, char *var1, char *var2);
} builtin_t;

/*string parse functions*/
int _strlen(char *s);
char *_strcat(char *s1, char *s2);
char *_strdup(const char *str);
int _strcmp(char *s1, char *s2);
int _strncmp(char *s1, char *s2, int n);
char *_strndup(const char *str, size_t size);

/*env list functions*/
char *get_key(char *str);
char *get_value(char *str);
env_t *add_node_end_env_t(env_t **head, char *env_line);
char **build_env_array(env_t *head);
void delete_env_node(env_t **head, char *value);

/*built in functions*/
char *bi_exit(char *var1, char *var2);
char *bi_chdir(char *var1, char *var2);
char *bi_set_env(char *key, char *value);
char *bi_unset_env(char *var1, char *var2);
char *get_pwd(env_t *head);
void free_env_list(env_t **head);
void print_env(char **list, int oi);

/*separator/operator functions*/
int (*check_built_ins(char *line))(path_t *path_head, env_t *head);
char **tokenizer(char *buffer);
char *parse_args(char **tokenized, path_t *path_head, env_t *head);

/*execution functions*/
void prompt(void);
char *find_command(char **tokenized, env_t *head);

#endif /*HSH_H*/
