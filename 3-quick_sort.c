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
/*	print_array1(a, 0, length  + 1);*/
	quicksort_recursive(a, first, i_p - 1, length);
	printf("ONTO RIGHT\n");
//	print_array1(a, 0, length  + 1);
	quicksort_recursive(a, i_p + 1, last, length);
	}
	print_array1(a, 0, length  + 1);
}

int partition(int a[], int first, int last, int length)
{
	int i_pv = a[last];
	int i = first;/*i_pv is the value at the pivot index*/
	int j = last;

	printf("first: %d  , ", first);
	printf("last: %d   , ", last);
	while (i < j)
	{
		while (a[i] < i_pv && i <= last)
		{
			i++;
		}
		while (a[j] >= i_pv && j >= first)
		{
			j--;
		}
		if (i < j)
		{
			flag = 1;
			swap(&a[i], &a[j], a, length);
			printf("OUT OF IF\n");
		}
	}
	swap(&a[last], &a[i], a, length);
	printf("=== RETURN===i: %d\n", i);
	return (i);
	/**
	  printf("first: %d\n, ", first);
	printf("last: %d\n, ", last);
	for (j = first; j < last; j++)
	{
		if ( a[j] <= i_pv)
		{
			swap(&a[i], &a[j], a, length);
			*print_array1(a, 0, length  + 1);*
			i++;
			while (k <= length)
			{
			*printf("%d, ", a[k]);*
				k++;
			}
		}	
		*printf("\n");*
	} *for loop*
	swap(&a[i], &a[last], a, length);
	printf("===RETURN i: %d ===", i);
	return (i);
*/
}
