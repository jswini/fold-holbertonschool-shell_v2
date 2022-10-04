#include "hsh.h"
/**
 * _strndup - duplicates a string
 * @str: string for duplication
 * @size: size of string for duplication
 * Return: pointer to the duplicated string
 */

char *_strndup(const char *str, size_t size)
{
	int i;
	char *ptr;

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '/';
	i++;
	ptr[i] = '\0';
	return (ptr);
}
