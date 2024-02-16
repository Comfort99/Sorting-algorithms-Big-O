#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/***
  *
  *
  *
  */
void swap(int *i,int *j);
void cocktail(int a[], int length);
int main()
{
	int a[] = {5,6,1,12,20,3,9,1,15,8,17}, i;
	int length = sizeof(a) / sizeof(a[0]);

	cocktail(a, length);
	for (i = 0; i < length; i++)
		printf("%d: ", a[i]);
	printf("\n");
	return (0);
}

void cocktail(int a[], int length)
{
	int i = 0;
	int end;
	int flag = 1;
	end = length - 1;

	while(flag == 1)
	{
		flag = 0;
		for (; i < end; i++)
		{
			if (a[i] > a[i + 1])
			{
				flag = 1;
				swap(&a[i], &a[i + 1]);
			}
		}
		if (flag == 0)
			break;
	flag = 0;
	end -= 1;
	
	for (i = end - 1; i >= 0; i--)
	{
		if (a[i] > a[i + 1])
		{
			flag = 1;
			swap(&a[i], &a[i + 1]);
		}
	}
	i = i + 1;
	}
}


void swap(int *i,int *j)
{
	int temp = *i;

	*i = *j;
	*j = temp;
}
