#include "sort.h"

/**
* double_swap - function that swaps nodes in doubly linked list
* @list: pointer to start of list
* @node_1: first node to swap
* @node_2: second node to swap
*
* Return: void
*/

void double_swap(listint_t **list, listint_t **node_1, listint_t *node_2)
{
/* Update the next pointer of node_1 to point to the node following node_2 */
	(*node_1)->next = node_2->next;

/* If node_2 is not the last node, update the previous */
/* pointer of the node after node_2 */
	if (node_2->next != NULL)
		node_2->next->prev = *node_1;

/* Update the previous pointer of node_2 to point to node before node_1 */
	node_2->prev = (*node_1)->prev;

/* Update the next pointer of node_2 to point to node_1 */
	node_2->next = *node_1;

/* If node_1 is not the first node, update the next pointer of the node */
/* before node_1 */
	if ((*node_1)->prev != NULL)
		(*node_1)->prev->next = node_2;
/* If node_1 is the first node, update head of the list to point to node_2 */
	else
		*list = node_2;

/* Update the previous pointer of node_1 to point to node_2 */
	(*node_1)->prev = node_2;

/* Update pointer to node_1 to point to the node before node_2 */
	*node_1 = node_2->prev;
}

/**
* insertion_sort_list - function that sorts doubly linked list with insertion
* @list: double pointer to the head of the list
*
* Return: void
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *node_prev, *node_next;

/* Check if list of head of list is NULL */
	if (list == NULL || *list == NULL)
		return;

/* Traverse the list starting from the second node */
	for (node_next = (*list)->next; node_next != NULL;
	node_next = node_next->next)
	{
		node_prev = node_next->prev;

	/* Swap adjacent nodes until the previous node is in correct position */
		while (node_prev != NULL && node_prev->n > node_next->n)
		{
		/* Perform swap operation between node_prev and node_next */
			double_swap(list, &node_prev, node_next);

		/* Print the list */
			print_list(*list);

		/* Update node_prev to the previous node of node_next */
			node_prev = node_next->prev;
		}
	}
}
