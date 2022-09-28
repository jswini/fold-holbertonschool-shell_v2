#ifndef HSH_H
#define HSH_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>
#include <string.h>

int _strlen(char *s);
char *_strcat(char *s1, char *s2);
char *_strdup(const char *str);
int _strcmp(char *s1, char *s2);
int _strncmp(char *s1, char *s2, int n);

/**
 * @brief 
 * 
 */
typedef struct environment_s
{
	char *s;
	struct environment_s *next;

} environment_t;

/**
 * struct flag_info - struct to store environment info
 * @env: environment variables at program start
 * @toexit: flag for exit
 * @env_head: the head of a linked list of current env variables
 * @prog_name: name of the program
 * @prog_status: the exit code of the last program executed
 * @line_number: tracks number of executed lines
 */
typedef struct flag_info
{
	char **env;
	int toexit;
	environment_t env_head;
	char *prog_name;
	int prog_status;
	int line_number;

} flag_info_t;

char *get_env_list(char *env, flag_info_t *info);

#endif /*HSH_H*/
