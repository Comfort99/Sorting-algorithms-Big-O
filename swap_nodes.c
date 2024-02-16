#include "sort.h"
/**
  *
  *
  *
  *
  */
void swap_(listint_t *y, listint_t *z)
{
	listint_t *i = y;
	listint_t *t = z;
			printf("IN SWAP FUNCTION======\n");
	                printf("This is i1: %d\n", i->n);
                        printf("This is t: %d\n", t->n);

	if (i->n > t->n)
                {
                       // i = t->prev;
                       //printf("This is i1: %d\n", i->n);
                       // printf("This is t: %d\n", t->n);
                        i->next = t->next;
                        if (t->next != NULL)
                        {
                            //    printf("i->next->n: %d\n", i->next->n);
                                t->next->prev = t->prev;
                          //      printf("t->next->prev :%d\n", t->next->prev->n);
                        }
                        if (i->prev != NULL)
                        {
                                t->prev = i->prev;
                        //printf("This is t->prev: %d\n", t->prev->n);
                        }
                        else
                                t->prev = NULL;
                        i->prev = t;
                        //printf("This is i->prev: %d\n", i->prev->n);
                        if (t->prev != NULL)
                        {
                                t->prev->next = t;
                       // printf("This is t->prev->next: %d\n", t->prev->next->n);
                        }
                                t->next = i;
                                //printf("This is t->next: %d\n", t->next->n);
                          //      i = t->prev;
                                if (i != NULL)
                                        //printf("This is i2 : %d\n", i->n);
				t = i->next;
				printf("NOW i: %d\n", i->n);
				y = i;
				z = t;
				if (t != NULL)
				{
//					printf("NOW i->next : %d\n", i->next->n);
//					printf("CONFIRM t = i->next : %d\n", t->n);
				}
				// else if (t == NULL)
//					printf("t  //i->next is NULL\n");
		}
		printf("LEAVE\n");
}
