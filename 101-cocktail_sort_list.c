#include "sort.h"
void swap_(listint_t *y, listint_t *z);
/**
  * cocktail_sort_list - This sorts based on cocktail algorithm
  * @list: This is the list to be sorted
  */
void cocktail_sort_list(listint_t **list)
{
	int flag = 1;
	listint_t *start;
	listint_t *end;

	if (list == NULL || (*list) == NULL || (*list)->next == NULL)
		return;
	start = end = *list;
	if (start->next == NULL)
		return;
	while (end->next != NULL) /* i.e last node is end->next != NULL*/
		end = end->next;
	while (flag == 1)
	{
		flag = 0;
		for (; start->next != NULL && start != end;)
		{
			if (start->n > start->next->n)
			{
				flag = 1;
				swap_(start, start->next); /* to swap what start points to	*/
				update_list(list);
				print_list1(*list);
			}
			else
				start = start->next;
		}
		if (end->next != NULL)
			end = end->next;
		if (flag == 0)
			break;
	flag = 0;
	end = end->prev;

	for (start = end->prev; start != NULL;) /*for loop Back*/
	{
		if (start->n > start->next->n)
		{
			flag = 1;
			swap_(start, start->next);
			update_list(list);
			print_list1(*list);
		}

		else
		if (start->prev == NULL)
			break;
		start = start->prev;

	} /* for loop*/
	/* for loop */
	/*update_list(list);*/
	/*print_list1(*list);*/
	start = start->next;
	while (end->next->next != NULL)
		end = end->next;
	}
} /*end of while loop*/
