#include "sort.h"
/**
 * insertion_sort_list - sorts doubly linked list using insertion sort
 * @list: doubly linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *ptr = *list, *precede, *current, *nexus, *hold;

	if (list && *list)
	{
	while (ptr)
	{
		current = ptr;
		ptr = ptr->next;

		while (current->prev && current->n < current->prev->n)
		{
		hold = current->prev;
		nexus = current->next;
		precede = hold->prev;
		current->prev = precede;
		if (precede)
			precede->next = current;
		else
			*list = current;
		current->next = hold;
		hold->next = nexus;
		hold->prev = current;
		if (nexus)
			nexus->prev = hold;
		print_list(*list);
		}
	}
	}
}
