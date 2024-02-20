#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *sorted = NULL;
	listint_t *current = *list;
	listint_t *next;

	if (*list == NULL || (*list)->next == NULL)
	{
		return;
	}

	while (current != NULL)
	{
		next = current->next;
		sorted_insertNode(&sorted, current);
		current = next;
		print_list(sorted);
	}
	*list = sorted;
}



void sorted_insertNode(listint_t **sorted, listint_t *current)
{
	listint_t *tmp = *sorted;

	if (*sorted == NULL || (tmp->n) >= (current->n))
	{
		current->next = tmp;
		if (tmp != NULL)
		{
			tmp->prev = current;
		}
		current->prev = NULL;
		(*sorted) = current;
		return;
	}

	while (tmp->next != NULL && tmp->next->n < current->n)
	{
		tmp = tmp->next;
	}

	current->next = tmp->next;
	if (tmp->next != NULL)
	{
		(tmp->next->prev) = current;
	}
	tmp->next = current;
	current->prev = tmp;
}
