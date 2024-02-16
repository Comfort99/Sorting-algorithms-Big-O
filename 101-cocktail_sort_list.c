#include "sort.h"
/**
  *
  *
  *
  *
  *
  *
  */
void swap(listint_t *y, listint_t *z);
void cocktail_sort_list(listint_t **list)
{
	int flag = 1;
	listint_t *start;
	listint_t *end;

	start = end =  *list;
	printf("start: %d\n", start->n);
	while(end->next != NULL) // i.e last node is end->next != NULL
	{
		end = end->next;
	}
		printf("end: %d\n", end->n);
		printf("================\n");
	while (flag == 1)
	{
		flag = 0;
		for (; start != end; start = start->next)
		{
			printf("start: %d\n", start->n);
			if (start->n > start->next->n)
			{
				flag = 1;
				printf("TO BE SWAPPED %d:\n", start->n);
				swap(start, start->next);	
			}
		}
		if (flag == 0)
			break;
	}


}

