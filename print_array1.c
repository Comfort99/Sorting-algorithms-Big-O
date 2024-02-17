#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array1(int *array, int lb, int size)
{

	int i;

    i = lb;
    printf("ENTERED PRINT FUNCTION\n");
    while (array && i < size)
    {
        if (i > lb)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
	printf("LEFT PRINT FUNCTION\n");
}
