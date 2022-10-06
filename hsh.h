#ifndef HSH_H
#define HSH_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>
#include <string.h>

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

void prompt(void);


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
void build_env_array(env_t *head);

/*built in functions*/
char *bi_exit(env_t *head);
char *bi_chdir(env_t *head, char *value, char *path);
char *bi_set_env(env_t *head, char *key, char *value);
char *bi_unset_env(env_t *head, char *key);
void print_env(char **list, int oi);

/*separator/operator functions*/
char **tokenizer(char *buffer);

/*execution functions*/
void find_command(char **tokenized, env_t *head);

#endif /*HSH_H*/
