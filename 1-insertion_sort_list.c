#include "sort.h"
/**
  *
  *
  *
  *
  */
void update_list(listint_t **list);
void insertion_sort_list(listint_t **list)
{
 	listint_t *t = *list;
	listint_t *i;
	listint_t *j;
	t = t->next;
	/* t is at 48*/
	/**
	  *printf("This is t prev:%d\n", t->prev->n);
	* printf("This is t:%d\n", t->n);
	* printf("This is t next:%d\n", t->next->n);
	*/
	for (i = t->prev;  t != NULL; )
	{
		i = t->prev;
		printf("============\n");
		printf("THIS is i:%d\n", i->n);
		printf("THIS is t:%d\n", t->n);
		while(i != NULL && (i->n > t->n))
		{
			i = t->prev;
			printf("This is i1: %d\n", i->n);
			printf("This is t: %d\n", t->n);
			i->next = t->next;
			if (t->next != NULL)
			{
				printf("i->next->n: %d\n", i->next->n);
				t->next->prev = t->prev;
				printf("t->next->prev :%d\n", t->next->prev->n);
			}
			if (i->prev != NULL)
			{
				t->prev = i->prev;
			printf("This is t->prev: %d\n", t->prev->n);
			}
			else
				t->prev = NULL;
			i->prev = t;			
			printf("This is i->prev: %d\n", i->prev->n);
			if (t->prev != NULL)
			{
				t->prev->next = t;
			printf("This is t->prev->next: %d\n", t->prev->next->n);
			}
				t->next = i;
				printf("This is t->next: %d\n", t->next->n);
				i = t->prev;
				if (i != NULL)
					printf("This is i2 : %d\n", i->n);
		}
		
		t = t->next;
	}
//	j = *list;
//	while (j->prev != NULL)
//	{
//		printf("j: %d\n", j->n);
//		if (j->prev != NULL)
//			printf("j->prev: %d\n", j->prev->n);
//		printf("j->next: %d\n", j->next->n);
//		j = j->prev;
//	}
//	printf("END ======== ");
//	printf("j is finally : %d: \n", j->n);
//	*list = j;
//		printf("TRIAL WITH J \n");
	update_list(list);
}
