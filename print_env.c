#include "hsh.h"

/**
 * print_env - prints the env variables
 * @list: pointer to the list of args
 * @oi: int variable containing total number of items in the list
 * Return: is void
 */

void print_env(char **list, int oi)
{
	int i = 0;

	while (i < oi)
	{
		printf("%s\n", list[i]);
		i++;
	}
}
