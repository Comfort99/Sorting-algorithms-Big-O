#include "sort.h"
/**
  *
  *
  *
  *
  */
void insertion_sort_list(listint_t **list)
{
 	listint_t *t = *list;
	listint_t *i;
	listint_t *j;
	/* t is at 48*/
	/**
	  *printf("This is t prev:%d\n", t->prev->n);
	* printf("This is t:%d\n", t->n);
	* printf("This is t next:%d\n", t->next->n);
	*/
	for (t = t->next, i = t->prev, j = t->next;t->next != NULL;)
	{
		if (i->n > t->n)
		{
		while(t->prev != NULL && i->n > t->n)
		{
		//	i = t->prev;
			t->prev->next = t->next;/*j*/
			t->next->prev = t->prev;/*i*/
			if (t->prev->prev != NULL)
				t->prev = t->prev->prev;
			else
				t->prev = NULL;
			i->prev = t;
			if (t->prev != NULL)
				t->prev->next = t;
			t->next = i;
			t = j;
			j = j->next;
		
		}
		}
		else if (i->prev != NULL)
				i = i->prev;
		else
		{
			t = t->next;
			i = t->prev;
		}
	}
}



i = t->prev;
j = t->next;

while (i->n > t->n)
{
	if (i->prev == NULL)
		break;
	i = i->prev;
}
	i = i->next;
	//swap
	
