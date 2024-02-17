#include "sort.h"
/**
  *
  *
  *
  *
  *
  */
void merge_split(int *a, int lb, int hb);
void merge_sort(int *array, size_t size)
{
	int *a = array;

	merge_split(a, 0, size);
//	int lb = 0, hb = size - 1,n = 0;

//	a[2] = 88822;	
//	print_array1(a, size);

}

void merge_split(int *a, int lb, int hb)
{
	int /*size*/mid;
	
	printf("ENTERED SPLIT FUNCTION\n");
 	printf("lb is : %d\n", lb);	
	printf("hb is : %d\n", hb);	
	//size = (hb + 1) - lb;// T BEG size = size of array
	print_array1(a, lb, hb);
	if (lb < hb)
	{
		mid = (lb  + (hb - 1))/ 2;
		printf("mid is : %d\n", mid);	
		merge_split(a, lb, mid);
		///print_array1(a, size);
	///	merge_split(a, mid + 1, hb);
		//print_array1(a, size);
	}
	 printf("LEFT SPLIT FUNCTION\n");
}
