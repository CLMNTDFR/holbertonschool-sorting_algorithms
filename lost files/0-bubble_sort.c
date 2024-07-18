#include "sort.h"

/**
* swap - function the value of two integer
* @a: first value
* @b: second value
*0
* Return: void
*/
void swap(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

/**
* bubble_sort - function that sorts an array of integers in ascending order
*               using the Bubble sort algorithm.
* @array: pointer to the start of the array
* @size: size of the array
*
* Return: void
*/

void bubble_sort(int *array, size_t size)
{
	size_t outdex, index;

	if (array == NULL)
		return;

/* loop until the penultimate element (last = NULL) */
	for (outdex = 0; outdex < size - 1; outdex++)
	{
	/* optimization of the function by not resorting the last sorted element */
		for (index = 0; index < size - outdex - 1; index++)
		{
			if (array[index] > array[index + 1])
			{
				swap(&array[index], &array[index + 1]);
				print_array(array, size);
			}
		}
	}
}
