#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}

void update_list(listint_t **list)
{
        listint_t *j;

                j = *list;
        while (j->prev != NULL)
        {
/**
//                printf("j: %d\n", j->n);
  //              if (j->prev != NULL)
    //                    printf("j->prev: %d\n", j->prev->n);
//      /          printf("j->next: %d\n", j->next->n);
        */
		j = j->prev;
        }
/*1        printf("END ======== ");*/
/*1        printf("j is finally : %d: \n", j->n);*/
        *list = j;
}

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list1(listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
