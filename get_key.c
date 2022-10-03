#include "hsh.h"

/**
 * @brief 
 * 
 */

char *get_key(char *str)
{
	char *return_value;
	int i = 0;
	
	while (str[i] != '=' && str[i] != '\n')
	{
		i++;
	}
	return_value = _strndup(str, i);
	return (return_value);
}
