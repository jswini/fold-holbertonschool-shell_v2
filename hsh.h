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
 * struct env_path - singly linked list of path env var
 *
 * @file_path: path to directory
 * @next: pointer to next node
 */
typedef struct env_path
{
	char *file_path;
	struct env_path *next;
} env_path_t;

#endif /*HSH_H*/
