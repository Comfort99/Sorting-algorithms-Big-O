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
                printf("B IS NULL\n");
                exit(1);
        }
        else if (b != NULL)
                printf("B is SUCCESSFUL\n");
	*(b + 1) = 685;
	//b[2] = 9067;
	//printf("b[2] is : %d\n", b[2]);//as *(b + 2) or b[2] ; it works;


	//merge_actual(a, 0, 0, 0);
	merge_split(a, 0, size - 1, b);
//	int lb = 0, hb = size - 1,n = 0;

//	a[2] = 88822;	
//	print_array1(a, size);

}

void merge_split(int *a, int lb, int hb, int *b)
{
	int /*size*/mid;
	printf("ENTERED SPLIT FUNCTION**\n");
 	printf("lb is : %d\n", lb);	
	printf("hb is : %d\n", hb);	
	//printf("b[1] is : %d\n", b[1]);
	//printf("length is : %d\n", length);
	//size = (hb + 1) - lb;// T BEG size = size of array
	print_array1(a, lb, hb + 1);
	if (lb < hb)
	{
		mid = (lb  + (hb - 1))/ 2;
		printf("mid is : %d\n", mid);	
		merge_split(a, lb, mid, b);
		printf("NOW ONTO THE RIGHT SPLIT\n");
		///print_array1(a, size);
		merge_split(a, mid + 1, hb, b);
		merge_actual(a, lb, mid, hb, b);
		//print_array1(a, size);
	}
	 printf("LEFT SPLIT FUNCTION\n");
}


void merge_actual(int a[], int lb, int mid, int hb, int *b)
{
		//printf("b[2] is : %d\n", b[2]);
	int i = lb, j =  mid + 1, k = lb;

	printf("MERGING>>>>>\n");
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
	for (k = lb; k <= hb; k++)
		printf("b[%d] : %d\n", k, b[k]);
}
