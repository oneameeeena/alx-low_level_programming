#include "lists.h"

/**
 * free_list - func to free list
 * @head: head of list.
 * Return: _Noreturn.
 */

void free_list(list_t *head)
{
	list_t *actuel;

	while ((actuel = head) != NULL)
	{
		head = head->next;
		free(actuel->str);
		free(actuel);
	}
}
