#include "hsh.h"

void fill_env_array(env_t *head, char **outputList)
{
	int i = 0;
	int keysize;
	int valuesize;
	int strsize;

	for (i = 0; head != NULL; i++, head = head->next)
	{
		keysize = strlen(head->key);
		valuesize = strlen(head->value);
		strsize = (keysize + valuesize + 2);
		outputList[i] = malloc(strsize);
		strcpy(outputList[i], head->key);
		strcpy(&outputList[i][keysize], "=");
		strcpy(&outputList[i][keysize + 1], head->value);
		/* printf("filling with %s\n", outputList[i]); */
	}
	
}