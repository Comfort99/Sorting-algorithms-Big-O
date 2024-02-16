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
	//printf("start: %d\n", start->n);
	while(end->next != NULL) // i.e last node is end->next != NULL
	{
		end = end->next;
	}
	//	printf("end: %d\n", end->n);
	//	printf("================\n");
	while (flag == 1)
	{
		flag = 0;
		for (; start->next != NULL && start != end;)
		{
	//		printf("end: %d\n", end->n);
			printf("start1: %d\n", start->n);
			if (start->n > start->next->n)
			{
				flag = 1;
	//			printf("TO BE SWAPPED %d:\n", start->n);
				swap_(start, start->next); // to swap what start points to	
				printf("start2 : %d\n", start->n);
	//			if (start->next != NULL)
	//			printf("start->next: %d\n", start->next->n);
			}
			else
				start = start->next;
		}
		if (end->next != NULL)
			end = end->next;
		printf("LEFT FOR LOOP \n");
		if (start == end)
			printf("start == end\n");
		printf("end : %d\n", end->n);
		if (flag == 0)
			break;
	// STILL INSIDE WHILE LOOP
	// BACKLWARDS NOW
	flag = 0;
	end = end->prev;
	printf("end : %d\n", end->n);
	
	}


}

