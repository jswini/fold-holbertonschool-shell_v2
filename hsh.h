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
char **fill_env_array(env_t *head, char **outputList);
void delete_env_node(env_t **head, char *value);
char *find_path(char **output_list);
path_t *path_llist(path_t **head, char *path);

/*built in functions*/
char *bi_exit(char **line, path_t *path, env_t *head);
char *bi_chdir(char *line, path_t *path, env_t *head);
char *bi_set_env(char *line, char *value, env_t *head);
char *bi_unset_env(char *line, env_t *head);
char *get_pwd(env_t *head);
void free_env_list(env_t **head);
void free_path_list(path_t **head);
void print_env(char **list, int oi);

/*separator/operator functions*/
char *check_built_ins(char **line, path_t *path, env_t *head);
char **tokenizer(char *buffer);
char *parse_args(char **tokenized, path_t *path_head, env_t *head);

/*execution functions*/
void prompt(void);
char *find_command(char **tokenized, env_t *head);
char **create_command(char *filename, path_t *path_list);
char *execute_command(char **cmd, char *status);

#endif /*HSH_H*/
