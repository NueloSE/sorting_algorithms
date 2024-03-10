#include "sort.h"

/**
 * swapper - swaps two nodes in a double linked list
 * @nodeA: the first node
 * @nodeB: the second node
 * @list: double pointer to the double linked list
 * Return: void
*/

void swapper(listint_t *nodeA, listint_t *nodeB, listint_t **list)
{
	listint_t *tmp1, *tmp2;

	if (nodeA == NULL || nodeB == NULL)
		return;

	tmp1 = nodeA->prev;
	tmp2 = nodeB->next;

	if (tmp1 != NULL)
		tmp1->next = nodeB;

	if (tmp2 != NULL)
		tmp2->prev = nodeA;

	nodeA->prev = nodeB;
	nodeA->next = tmp2;
	nodeB->prev = tmp1;
	nodeB->next = nodeA;

	if (nodeB->prev == NULL)
		*list = nodeB;
}

/**
 * insertion_sort_list - sorts a doubly linked list in ascending order
 * @list: a pointer to the address of the first node
 * Returns: always void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *prev_node, *curr_node;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	curr_node = *list;

	while (curr_node)
	{
		prev_node = curr_node->prev;

		while (prev_node && (prev_node->n > curr_node->n))
		{
			swapper(prev_node, curr_node, list);
			print_list(*list);
			prev_node = curr_node->prev;
		}
		curr_node = curr_node->next;
	}
}
