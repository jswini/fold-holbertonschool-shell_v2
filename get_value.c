#include "hsh.h"
/**
 * get_value - returns the value from the key/val pair of the env list
 * @str: the env list to parse
 * Return: the value from the key/val pair
 */

char *get_value(char *str)
{
	char *ret_value;
	int i = 0;

	while (str[i] != '=' && str[i] != '\0')
	{
		i++;
	}
	ret_value = strdup(&str[i + 1]);
	return (ret_value);
}
