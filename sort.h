#ifndef SORT_H_
#define SORT_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void doubleSwap(listint_t **list, listint_t **node1, listint_t *node2);
void swap(int *a, int *b);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
size_t lomuto(int *array, int low, int size, size_t rSize);
void quick(int *array, int low, int size, size_t rSize);
void quick_sort(int *array, size_t size);

#endif
