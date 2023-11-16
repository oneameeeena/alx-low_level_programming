#include "lists.h"

/**
 * add_node_end - add elements func at the end
 * of a list_t list.
 * @head: head of list.
 * @str: new str to add.
 * Return: address of head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_elements, *tmp;
	size_t nbchar;

	new_elements = malloc(sizeof(list_t));
	if (new_elements == NULL)
		return (NULL);

	new_elements->str = strdup(str);

	for (nbchar = 0; str[nbchar]; nbchar++)
		;

	new_elements->len = nbchar;
	new_elements->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = new_elements;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_elements;
	}

	return (*head);
}
