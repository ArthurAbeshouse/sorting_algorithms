#include "sort.h"
/**
 * insertion_sort_list - insertion sort method
 * @list: doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = (*list)->next, *nodes, *node_a, *node_b;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	while (current != NULL)
	{
		nodes = current;
		while (nodes != NULL)
		{
			node_a = current;
			node_b = nodes;
			if (node_b->n > node_a->n)
			{
				if (node_a->next != NULL)
					node_a->next->prev = node_b;
				if (node_b->prev != NULL)
					node_b->prev->next = node_a;
				node_a->prev = node_b->prev;
				node_b->prev = node_a;
				node_b->next = node_a->next;
				node_a->next = node_b;
				if (node_a->prev == NULL)
					*list = node_a;
				print_list(*list);
			}
			nodes = nodes->prev;
		}
		current = current->next;
	}
}
