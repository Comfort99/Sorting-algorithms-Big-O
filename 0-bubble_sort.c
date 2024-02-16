#include "sort.h"
/**
 * swap - Swaps two integers
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - function that sorts array of integers
 * in ascending order using Bubble algorithm
 * @array: pointer to array
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swapped;

	if (size < 2)
		return;

	for (i = 0; i < size ; i++)
	{
		swapped = 0;

		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				swapped = 1;
			}
		}
		if (!swapped)
			break;
	}
}
