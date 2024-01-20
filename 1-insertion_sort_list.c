#include "sort.h"

/**
 * insertion_sort_list -sorts a doubly linked of int in ascending by Insertion
 * @list: the doubly linked list
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *lead, *follow, *new, *temp;

	if (!list || !(*list) || !((*list)->next))
		return;

	follow = *list;
	lead = (*list)->next;
	while (lead)
	{
		new = lead->next;
		while (follow && lead->n < follow->n)
		{
			/*change the left nod*/
			if (follow->prev)
				follow->prev->next = lead;
			else
				*list = lead;

			/* change the right node to point to the 
			 * biger num node */
			if (lead->next)
				lead->next->prev = follow;

			temp = lead->next;
			lead->next = follow;
			lead->prev = follow->prev;
			follow->next = temp;
			follow->prev = lead;
			print_list(*list);
			/** ti comait the next pair
			 * the old one eith the new one
			 * that found after changing the prev pair
			 */
			follow = lead->prev;
		}
		lead = new;
		if (lead)
			follow = lead->prev;
	}
}
