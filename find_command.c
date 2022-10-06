#include "hsh.h"

void find_command(char **tokenized, env_t *head)
{
	int status;
	char **output_list;
	char *path;

	
	build_array(*head); //mallocs env array
	fill_array(*head); //populates env array
	path = find_path(*output_list);
	if (parse_args(tokenized, *head, path) == "success")
		{
			return (status);
		} //checks for args, operators, separators
	else 
	
	/*
	separate into chunks based on operator/separator
	order chunks into processing order
	create pipes and dup2s as needed
	send each command/pipe to execute
	*/
		status = execute_command(); //fork, execve, wait, return here
	return (status); //returns to check builtins
}
