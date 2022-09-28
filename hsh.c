#include "hsh.h"

/**
 * main - The start of the shell including infinite loop
 *
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	env_path_t *path = NULL;
	int i;
	char *dup_path = NULL;
	char *path_token;
	char delims[] = {':', '=', '\n'};
}
