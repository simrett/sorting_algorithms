#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a listint_t doubly-linked list.
 * @h: Pointer to the head of the doubly-linked list.
 * @first_node: Pointer to the first node to swap.
 * @second_node: Pointer to the second node to swap.
 *
 * This function swaps the positions of two nodes (n1 and n2) in a
 * doubly-linked list represented by the pointer h. It updates the
 * connections of the adjacent nodes accordingly.
 */
void swap_nodes(listint_t **h, listint_t **first_node, listint_t *second_node)
{
	(*first_node)->next = second_node->next;
	if (second_node->next != NULL)
		second_node->next->prev = *first_node;
	second_node->prev = (*first_node)->prev;
	second_node->next = *first_node;
	if ((*first_node)->prev != NULL)
		(*first_node)->prev->next = second_node;
	else
		*h = second_node;
	(*first_node)->prev = second_node;
	*first_node = second_node->prev;
}

/**
 * insertion_sort_list - performs insertion sort on a list
 * @list: linked list of ints to sort
 *
 * Description: Prints the list after each swap.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *iter, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iter = (*list)->next; iter != NULL; iter = tmp)
	{
		tmp = iter->next;
		insert = iter->prev;
		while (insert != NULL && iter->n < insert->n)
		{
			swap_nodes(list, &insert, iter);
			print_list((const listint_t *)*list);
		}
	}
}
