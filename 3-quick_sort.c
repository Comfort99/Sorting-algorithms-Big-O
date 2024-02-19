#include "sort.h"
/**
  *
  *
  *
  *
  *
  */
void swap(int *p, int *p1, int a[], int length);
void quicksort_recursive(int a[], int first, int last, int length);
int partition(int a[], int first, int last, int length);

void quick_sort(int *array, size_t size)
{
	int length = size - 1;

	quicksort_recursive(array, 0, size - 1, length);
}

void swap(int *p, int *p1, int a[], int length)
{
	int temp = *p;
	*p = *p1;
	*p1 = temp;
	print_array1(a, 0, length  + 1);
}

void quicksort_recursive(int a[], int first, int last, int length)
{

	if (first < last)
	{
	int i_p = partition(a, first, last, length); /*This is the pivot index*/
	quicksort_recursive(a, first, i_p - 1, length);
	quicksort_recursive(a, i_p + 1, last, length);
	}
}

int partition(int a[], int first, int last, int length)
{
	int i_pv = a[last];
	int i = first;/*i_pv is the value at the pivot index*/
	int j;
	int k = 0;

	for (j = first; j < last; j++)
	{
		if ( a[j] <= i_pv)
		{
			swap(&a[i], &a[j], a, length);
			/*print_array1(a, 0, length  + 1);*/
			i++;
			while (k <= length)
			{
			/*printf("%d, ", a[k]);*/
				k++;
			}
		}	
		/*printf("\n");*/
	} /*for loop*/
	
	swap(&a[i], &a[last], a, length);
	return (i);
}
