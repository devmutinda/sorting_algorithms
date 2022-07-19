#include "sort.h"
/**
 * insertion_sort_list - sorts doubly linked list using insertion sort
 * @list: doubly linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *ptr = *list, *precede, *after, *nexus, *hold;

	if (*list && list && ptr->next)
	{
	while (ptr)
	{
		after = ptr;
		ptr = ptr->next;

		while (after->prev && after->n < after->prev->n)
		{
		hold = after->prev;
		nexus = after->next;
		precede = hold->prev;
		after->prev = precede;
		if (precede)
			precede->next = after;
		else
			*list = after;
		after->next = hold;
		hold->next = nexus;
		hold->prev = after;
		if (nexus)
			nexus->prev = hold;
		print_list(*list);
		}
	}
	}
}
