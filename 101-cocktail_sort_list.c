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
	
	for (start = end->prev; start != NULL;) /*for loop Back*/
	{
/*		printf("start  at BEG. is :%d\n", start->n);*/
		if (start->n > start->next->n)
		{
			flag = 1;
/*			printf("start is :%d\n", start->n);*/
/*			printf("start->next is :%d\n", start->next->n);*/
			swap_(start, start->next);
		 	update_list(list);
			print_list1(*list);
			/*	start = start->prev;*/
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
		
	} /* for loop*/
/*	if (start == end)*/
/*		printf("==================== BB LOOP ENDED ===========\n");*/
	/*printf("B: ");*/
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

