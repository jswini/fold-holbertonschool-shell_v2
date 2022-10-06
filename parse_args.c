#include "hsh.h"

void parse_args(char **tokenized)
{
	int i;
	char *line;
	int line_len;

	line_len= strlen(line);
	if (line[line_len] + 1 == '\n')
	{
		check_built_ins(line[0], line);
	}

	/*
	1) build statement from line - done in tokenizer
	2)		check separators
			2.1)	; || &&
		2a)	build command from statement
			2.2)	check for redirects < << > >> |
	3) check/execute built in from command
	4) execute command if not built in
	*/

	/* for (i = 0; tokenized[i] != '\0'; i++)
	{
		if (tokenized[i] == ';' || tokenized[i] == '&' || (tokenized[i] == '|' && tokenized[i + 1] == '|'))
		{
			//call function function for it
		}
		else
		{
			line[i] = _strdup(tokenized[i]);
			if (tokenized[i] = '\n');
		}
	}
	return("something");
}
		 */
		
					/* else
				{
					if (execve(line[0], line, env) == -1)
						perror("%s", line[0]);
				}
			{
				if (tokenized[i] == '<' || tokenized[i] == '>' || tokenized[i] == '|')
				{
					/*check for << or >>
					
					*/
				/* }
				else
				{ */
					/*do the things if single
					if i = '|'
						pipe operator
					if i = '<'
						create file and output
					if i = '>'
						read file and do command*/
			/* 	}
			}  */
		
	/*
	take each command and create a line from it
		check for separators ( ; ), if found create 1 command line for each item
			call execve for each item, and wait for completion
		check for operators ('>', '>>', '<', '<<', '|', '||', '&&')
			set up each operators order of action
				| has 1 execve for each end
					first execve goes to write end
					second execve gets from read end
				|| checks for errors and stops if no error found on a command
					is error? no stop
					yes go to next and try again
				&& stops if error is found on any command
					is error?  no - go to next and try again
					yes - stop
				> create file and dup2 output to it
					open with O_CREAT
					write to file
				>> append output to file
					open with O_APPEND and write to file
				< outputs file to first operand (echo < touch new_file)
					read file (second operator) and send to command (first operator)
				<< reads file or input until specific string or character is found
					same as < but stops when thing is found
	*/


/*
ls -a "_" rev



copy each token into an array
stop if separator/operator is found
remember what operator for change
start new array
goto line 39.
*/
