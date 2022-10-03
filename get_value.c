#include "hsh.h"
/**
 * @brief 
 * 
 */

char *get_value(char *str)
{
	char *return_value;
	int i = 0;

	while (str[i] != '=' && str[i] != '\0')
	{
		i++;
	}
	return_value = strdup(&str[i + 1]);
	return (return_value);
}
