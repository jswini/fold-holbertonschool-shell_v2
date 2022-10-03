#include "hsh.h"

void find_command(char **tokenized)
{
	int status;

	build_array(); //mallocs env array
	fill_array(); //populates env array
	find_path();
	parse_args(); //checks for args, operators, separators
	/*
	separate into chunks based on operator/separator
	order chunks into processing order
	create pipes and dup2s as needed
	send each command/pipe to execute
	*/
	status = execute_command(); //fork, execve, wait, return here
	return (status); //returns to check builtins
}
