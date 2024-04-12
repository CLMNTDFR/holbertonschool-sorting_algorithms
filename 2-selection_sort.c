#include "sort.h"

/**
* selection_sort - sorts an array of integers in ascending order using
*                  the Selection sort algorithm
* @array: pointer to the first element of the array
* @size: number of elements in the array
*
* Return: void
*/
void selection_sort(int *array, size_t size)
{
	size_t current, smallest, j;
	int temp;

	/* Loop through the array */
	for (current = 0; current < size - 1; current++)
	{
		/* Assume the current element is the smallest */
		smallest = current;

		/* Find the index of the smallest element in the unsorted part */
		for (j = current + 1; j < size; j++)
		{
			if (array[j] < array[smallest])
				smallest = j;
		}

		/* Swap the current element with the smallest element */
		if (smallest != current)
		{
			temp = array[current];
			array[current] = array[smallest];
			array[smallest] = temp;
			print_array(array, size);
		}
	}
}
