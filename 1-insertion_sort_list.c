#include "sort.h"
/**
 * swap - swaps list
 * @ptr: pointer
 * Return: void
 */
listint_t *swap(listint_t *ptr)
{
	listint_t *precede, *after, *nexus;

	precede = ptr->prev;
	after = ptr->next;
	nexus = after->next;
	if (precede)
		precede->next = after;
	after->prev = precede;
	after->next = ptr;
	ptr->prev = after;
	ptr->next = nexus;
	if (nexus)
		nexus->prev = ptr;

	return (after);

}

/**
 * insertion_sort_list - sorts doubly linked list using insertion sort
 * @list: doubly linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *ptr = *list, *precede, *after, *nexus, *hold;

	if (*list && list)
	{
	while (ptr->next)
	{
	if (ptr->n > ptr->next->n)
	{
		after = swap(ptr);

		print_list(*list);

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
		nexus->prev = hold;
		print_list(*list);
		}
	}
	else
		ptr = ptr->next;
	}
	}
}
