#include <stdio.h>
#include <stdlib.h>
/**
  *
  *
  *
  *
  *
  *
  */
void insertion_sort_list(int a[], int length);

int main()
{
	int a[] = {3,60,2,8,24,13,65,1, 3, 5, 7, 9, 2, 6, 8, 4};
	size_t i, length = sizeof(a) / sizeof(a[0]);

	insertion_sort_list(a, length);
	for (i = 0; i < length; i++)
		printf("a[%ld] = %d\n", i, a[i]);
	return 0;
}


void insertion_sort_list(int a[], int length)
{
	int i;
	int j;
	int key;
	int temp;

	for (i = 1; i < length; i++)
	{
		j = i - 1; 
		key = a[i];	
		while (j >= 0 && a[j] > key)
		{
			temp = a[j + 1];
			a[j + 1] = a[j];
			a[j] = temp;
			j = j - 1;
		}
	a[j + 1] = key;
	}
} 
