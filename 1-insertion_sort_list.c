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
	}
	*list = sorted;
	/**print_list(*list);**/
}



void sorted_insertNode(listint_t **sorted, listint_t *current)
{
	listint_t *tmp = *sorted;

	if (*sorted == NULL || ((*sorted)->n) >= (current->n))
	{
		current->next = *sorted;
		current->prev = NULL;
		if (*sorted != NULL)
		{
			(*sorted)->prev = current;
		}
		*sorted = current;
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

	print_list(*sorted);
}
