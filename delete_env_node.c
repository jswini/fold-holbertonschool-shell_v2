#include "hsh.h"

void remove_node(env_t **head, char value)
{
        env_t *current;
		
		if (*head == NULL)
        {
                return;
        }
        if ((*head)->key == value)
        {
                env_t *to_remove = *head;
                *head = (*head)->next;
                free(to_remove);
                return;
        }
        for (current = *head; current->next != NULL; current = current->next)
        {
                if (current->next->key == value)
                {
                        env_t *to_remove = current->next;
                        current->next = current->next->next;
                        free(to_remove);
                }
        }
}
