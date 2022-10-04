#include "hsh.h"
/**
 * get_key - gets key value from env
 * @str: string of env variables
 * Return: the key value
 */

char *get_key(char *str)
{
	char *retVal;
	int i = 0;

	while (str[i] != '=' && str[i] != '\n')
	{
		i++;
	}
	retVal = _strndup(str, i);

	return (retVal);
}
