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

} environment_t;

/*string parse functions*/
int _strlen(char *s);
char *_strcat(char *s1, char *s2);
char *_strdup(const char *str);
int _strcmp(char *s1, char *s2);
int _strncmp(char *s1, char *s2, int n);


add_node_end_env_t(environment_t **head, char *env_line);

#endif /*HSH_H*/
