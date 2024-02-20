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
