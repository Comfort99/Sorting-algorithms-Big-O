#include "sort.h"
/**
  *
  *
  *
  *
  *
  */
void swap(int *p, int *p1);
void quicksort_recursive(int a[], int first, int last, int length);
int partition(int a[], int first, int last, int length);

void quick_sort(int *array, size_t size)
{
	int length = size - 1;

	if  (size < 2)
		return;

	quicksort_recursive(array, 0, size - 1, length);
	print_array1(array, 0, length  + 1);
}

void swap(int *p, int *p1)
{
	int temp = *p;
	*p = *p1;
	*p1 = temp;
}

void quicksort_recursive(int a[], int first, int last, int length)
{

	if (first < last)
	{
	int i_p = partition(a, first, last, length); /*This is the pivot index*/
/*	print_array1(a, 0, length  + 1);*/
	quicksort_recursive(a, first, i_p - 1, length);
/*	print_array1(a, 0, length  + 1);*/
	quicksort_recursive(a, i_p + 1, last, length);
	}
}

int partition(int a[], int first, int last, int length)
{
	int i_pv = a[last];
	int i = first;/*i_pv is the value at the pivot index*/
	int j = last, flag = 0;
	
/*	printf("first: %d   ", first);*/
/*	printf("last: %d    \n", last);*/
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
			swap(&a[i], &a[j]);
			print_array1(a, 0, length  + 1);
/*			printf("OUT OF IF\n");*/
		}
	}
	swap(&a[last], &a[i]);
	if (flag == 0)
		print_array1(a, 0, length  + 1);
/*	printf("=== RETURN===i: %d\n", i);*/
	return (i);
}
