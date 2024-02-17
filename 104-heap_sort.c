#include "sort.h"
/**
 * swap - function to swap two elements
 * @a: pointer to array of integers
 * @b: pointer to array of integers
 */
void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

/**
 * max_heapify - Function to perform heapify (sift-down) operation
 * @arr: Parameter of an array
 * @n: Parameter to size of an array
 * @i: Parameter of an size of an array
 */
void max_heapify(int arr[], size_t n, size_t i)
{
	size_t largest = i;
	size_t left = 2 * i + 1;
	size_t right = 2 * i + 2;

	if (left < n && arr[left] > arr[largest])
		largest = left;
	if (right < n && arr[right] > arr[largest])
		largest = right;
	if (largest != i)
	{
		swap(&arr[i], &arr[largest]);
		print_array(arr, n);
		max_heapify(arr, n, largest);
	}
}

/**
 * heap_sort - function that sorts an array of integers
 * in ascending order using Heap sort algorithm
 * @array: pointer to an array
 * @size: number of elements of an array
 */
void heap_sort(int *array, size_t size)
{
	int i;

	if (array == NULL || size < 2)
		return;

	/* Build max heap */
	for (i = size / 2 - 1; i >= 0; i--)
		max_heapify(array, size, i);

	/* Extract elements one by one */
	for (i = size - 1; i > 0; i--)
	{
		swap(&array[0], &array[i]);
		max_heapify(array, i, 0);
		print_array(array, size); /* Print array after each swap */
	}
}
