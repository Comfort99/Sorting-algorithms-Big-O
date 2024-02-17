#include "sort.h"
/**
  *
  *
  */
void update_list(listint_t **list)
{
	listint_t *j;

	        j = *list;
        while (j->prev != NULL)
        {
//                printf("j: %d\n", j->n);
  //              if (j->prev != NULL)
    //                    printf("j->prev: %d\n", j->prev->n);
//      /          printf("j->next: %d\n", j->next->n);
	         j = j->prev;
        }
//1        printf("END ======== ");
//1        printf("j is finally : %d: \n", j->n);
        *list = j;
}

