#include "sort.h"
/**
  *
  *
  *
  *
  *
  *
  */
void swap_(listint_t *y, listint_t *z);
void cocktail_sort_list(listint_t **list)
{
	int flag = 1;
	listint_t *start;
	listint_t *end;

	start = end =  *list;
	/*printf("start: %d\n", start->n);*/
	while(end->next != NULL) /* i.e last node is end->next != NULL*/
	{
		end = end->next;
	}
	/*	printf("end: %d\n", end->n);*/
	/*	printf("================\n");*/
	while (flag == 1)
	{
		flag = 0;
		for (; start->next != NULL && start != end;)
		{
	/*		printf("end: %d\n", end->n);*/
/*/			printf("start1 at FRONT is : %d\n", start->n);*/
			if (start->n > start->next->n)
			{
				flag = 1;
	/*			printf("TO BE SWAPPED %d:\n", start->n);*/
				swap_(start, start->next); /* to swap what start points to	*/
				update_list(list);
  				print_list1(*list);
 /* 				printf("start2 : %d\n", start->n);*/
	/*			if (start->next != NULL)*/
	/*			printf("start->next: %d\n", start->next->n);*/
			}
			else
				start = start->next;
		}
		if (end->next != NULL)
			end = end->next;
/*/		printf("LEFT FOR LOOP \n");*/
		if (start == end)
/*/			printf("start == end\n");*/
/*/		printf("end : %d\n", end->n);*/
		if (flag == 0)
			break;
	/* STILL INSIDE WHILE LOOP*/
/*	printf("F: ");*/
/*	update_list(list);**/
/*	print_list1(*list);**/
	/* BACKLWARDS NOW*/
/*	printf("=================================");*/
/*	printf("BACKWARD....  ");*/
	flag = 0;
	end = end->prev;
<<<<<<< HEAD
=======
/*	printf("end is NOW  : %d\n", end->n);*/
>>>>>>> 2ec44cba319dd6c09ff1a5a43ea662b3229b9fbf
	
	for (start = end->prev; start != NULL;) /*for loop Back*/
	{
/*		printf("start  at BEG. is :%d\n", start->n);*/
		if (start->n > start->next->n)
		{
			flag = 1;
/*			printf("start is :%d\n", start->n);*/
/*			printf("start->next is :%d\n", start->next->n);*/
			swap_(start, start->next);
<<<<<<< HEAD
		 	update_list(list);
			print_list1(*list);
			/*	start = start->prev;*/
=======
		/*	start = start->prev;*/
>>>>>>> 2ec44cba319dd6c09ff1a5a43ea662b3229b9fbf
		/*	printf("start after swap is now :%d\n", start->n);*/
/*		printf("start AFTER SWAP  is :%d\n", start->n);*/
/*		printf("start->prev is :%d\n", start->prev->n);*/
/*		printf("start->next :%d\n", start->next->n);*/
/*		printf("end is :%d\n", end->n);*/
/*			if (end->prev != NULL)*/
/*				printf("end->prev is :%d\n", end->prev->n);*/
/*			else*/
/*				printf("end->prev is NULL\n");*/
/*		printf("end->next is :%d\n", end->next->n);*/
		}

		else  
/*			printf("start not greater\n");*/
		if (start->prev == NULL)
			break;
		start = start->prev;
		
<<<<<<< HEAD
	} /* for loop*/
/*	if (start == end)*/
/*		printf("==================== BB LOOP ENDED ===========\n");*/
	/*printf("B: ");*/
=======
	}/* for loop */
/*	if (start == end) */
/*		printf("==================== BB LOOP ENDED ===========\n");*/
	printf("B: ");
>>>>>>> 2ec44cba319dd6c09ff1a5a43ea662b3229b9fbf
	update_list(list);
	print_list1(*list);
/*	printf("start is :%d\n", start->n);*/
/*	printf("start at end of BB is :%d\n", start->n);*/
	start = start->next;
	while (end->next->next != NULL)
		end = end->next;
/*	printf("end at end of BB is :%d\n", end->n);*/
	} /*end of while loop*/

}


void swap_(listint_t *y, listint_t *z)
{
        listint_t *i = y;
        listint_t *t = z;

        if (i->n > t->n)
                {
                        i->next = t->next;
                        if (t->next != NULL)
                        {
                                t->next->prev = t->prev;
                        }
                        if (i->prev != NULL)
                        {
                                t->prev = i->prev;
                        }
                        else
                                t->prev = NULL;
                        i->prev = t;
                        if (t->prev != NULL)
                        {
                                t->prev->next = t;
                        }
                                t->next = i;
                                if (i != NULL)
                                t = i->next;
                                y = i;
                                z = t;
                }
}
