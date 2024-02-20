#include "sort.h"
/**
  *
  *
  *
  *
  *
  */
void merge_split(int *a, int lb, int hb, int *b);
void merge_actual(int a[], int lb, int mid, int hb, int *b);
void merge_sort(int *array, size_t size)
{
	int *a = array;
        int *b;

        b = malloc(sizeof(int) * size);
        if (b == NULL)
        {
                exit(1);
        }


	merge_split(a, 0, size - 1, b);
	free(b);
}

void merge_split(int *a, int lb, int hb, int *b)
{
	int /*size*/mid;
	if (lb < hb)
	{
		mid = (lb  + (hb - 1))/ 2;
		merge_split(a, lb, mid, b);
		merge_split(a, mid + 1, hb, b);
		merge_actual(a, lb, mid, hb, b);
	}
}


void merge_actual(int a[], int lb, int mid, int hb, int *b)
{
	int i = lb, j =  mid + 1, k = lb;

	printf("Merging...\n");
	printf("[left]: ");
	for (; i <= mid; i++)
	{
		if (i > lb)
			printf(", ");
		printf("%d", a[i]);
	}
	printf("\n");

	printf("[right]: ");
        for (; j <= hb; j++)
        {
                if (j > (mid + 1))
                        printf(", ");
                printf("%d", a[j]);
        }
        printf("\n");
	i = lb; j = mid + 1;

	while (i <= mid && j <= hb)
	{
		if (a[i] <= a[j])
		{
			b[k] = a[i];
			i++;
		}
		else
		{
			b[k] = a[j];
			j++;
		}
		k++;
	}
	if (i > mid)
		while (j <= hb)
		{
			b[k] = a[j];
			j++;
			k++;
		}
	else
	{
		while (i <= mid)
		{
			b[k] = a[i];
			i++;
			k++;
		}
	}
        printf("[Done]: ");
	for (k = lb; k <= hb; k++)
	{
		a[k] = b[k];
                if (k > lb)
                        printf(", ");
                printf("%d", a[k]);
        }
        printf("\n");

}
