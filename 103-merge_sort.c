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
	printf("\nDUSTED\n");
	free(b);
}

void merge_split(int *a, int lb, int hb, int *b)
{
	int /*size*/mid;
//@	printf("ENTERED SPLIT FUNCTION**\n");
 //@	printf("lb is : %d\n", lb);	
//@	printf("hb is : %d\n", hb);	
	//printf("b[1] is : %d\n", b[1]);
	//printf("length is : %d\n", length);
	//size = (hb + 1) - lb;// T BEG size = size of array
//@	print_array1(a, lb, hb + 1);
	if (lb < hb)
	{
		mid = (lb  + (hb - 1))/ 2;
//@		printf("mid is : %d\n", mid);	
		merge_split(a, lb, mid, b);
//@		printf("NOW ONTO THE RIGHT SPLIT\n");
		///print_array1(a, size);
		merge_split(a, mid + 1, hb, b);
		merge_actual(a, lb, mid, hb, b);
	///	merge_split(a, mid + 1, hb);
		//print_array1(a, size);
	}
//	merge_actual(a, lb, mid, hb, b);
//@	printf("LEFT SPLIT FUNCTION\n");
}


void merge_actual(int a[], int lb, int mid, int hb, int *b)
{
		//printf("b[2] is : %d\n", b[2]);
	int i = lb, j =  mid + 1, k = lb;

	printf("Merging...\n");
//@	printf("ABOUT TO MERGE>>>>>\n");
//@	printf(" i (lb) value is : %d\n", i);
//@	printf(" j (mid+1) value is : %d\n", j);
//@	printf(" mid value is : %d\n", mid);
//@	printf(" hb value is : %d\n", hb);
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
				//@printf("i-->a[%d] : %d\n", i, a[i]);
//@        for (; j <= hb; j++)
   //@             printf(" j-->a[%d] : %d\n", j, a[j]);	
	i = lb; j = mid + 1;

//@	printf("MERGING>>>>>\n");
	while (i <= mid && j <= hb)
	{
//@		printf("IN WHILE LOOP\n");
		if (a[i] <= a[j])
		{
//@			printf("IF-1\n");
			b[k] = a[i];
//@			printf("b[k] = a[i]: %d\n", b[k]);
			i++;
		}
		else
		{
//@			printf("ELSE-1\n");
			b[k] = a[j];
//@			printf("b[k] = a[j]: %d\n", b[k]);
			j++;
		}
		k++;
	}
	if (i > mid)
		while (j <= hb)
		{
//@			printf("IF-2\n");
			b[k] = a[j];
			j++;
			k++;
		}
	else
	{
		while (i <= mid)
		{
//@			printf("ELSE-2\n");
			b[k] = a[i];
			i++;
			k++;
		}
	}
//@	for (k = lb; k <= hb; k++)
//@		printf("b[%d] : %d\n", k, b[k]);
        printf("[Done]: ");
	for (k = lb; k <= hb; k++)
	{
		a[k] = b[k];
                if (k > lb)
                        printf(", ");
                printf("%d", a[k]);
        }
        printf("\n");
//@	for (k = lb; k <= hb; k++)
   //@             printf("a[%d] : %d\n", k, a[k]);	

  //@	printf("OUT OF MERGE\n");
}
