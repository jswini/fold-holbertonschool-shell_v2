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
 * @brief 
 * 
 */
typedef struct environment_s
{
	char *key;
	char *value;
	struct environment_s *next;
	struct environment_s *prev;

} env_t;

void prompt(void);

char *tokenizer(char* buffer);

/*string parse functions*/
int _strlen(char *s);
char *_strcat(char *s1, char *s2);
char *_strdup(const char *str);
int _strcmp(char *s1, char *s2);
int _strncmp(char *s1, char *s2, int n);
char *_strndup(const char *str, size_t size);

char *get_key(char *str);
char *get_value(char *str);
env_t *add_node_end_env_t(env_t **head, char *env_line);

#endif /*HSH_H*/
