#include "deck.h"
/**
 * compare_cards - Compare two cards based on their kind and value
 * @card1: Pointer to the first card
 * @card2: Pointer to the second card
 * Return: Integer less than, equal to, or greater than zero
 * if card1 is found respectively, to be less than,
 * to match, or be greater than card2
 */
int compare_cards(const void *card1, const void *card2)
{
	int i;
	const card_t *c1 = ((const deck_node_t *)card1)->card;
	const card_t *c2 = ((const deck_node_t *)card2)->card;
	const char *values[] = {"Ace", "2", "3", "4", "5", "6", "7", "8",
		"9", "10", "Jack", "Queen", "King"};

	if (c1->kind != c2->kind)
		return (c1->kind - c2->kind);

	if (c1->value == c2->value)
		return (0);

	/* Ace to King */
	for (i = 0; i < 13; ++i)
	{
		if (c1->value == values[i])
			return (-1);
		if (c2->value == values[i])
			return (1);
	}
	return (0); /* Shouldn't reach here if inputs are valid */
}

/**
 * sort_deck - Sort a deck of cards
 * @deck: Pointer to the head of a deck_node_t doubly-linked list
 */
void sort_deck(deck_node_t **deck)
{
	int count = 0, i;
	deck_node_t *current = *deck;
	deck_node_t **cards;

	if (deck == NULL || *deck == NULL || (*deck)->next == NULL)
		return;
	/* Count the number of cards in the deck */
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	/* Create an array to hold pointers to each card */
	cards = malloc(count * sizeof(deck_node_t *));

	if (cards == NULL)
		return; /* Memory allocation failed */
	/* Fill the array with pointers to each card in the deck */
	current = *deck;
	for (i = 0; i < count; ++i)
	{
		cards[i] = current;
		current = current->next;
	}
	/* Sort the array of cards based on kind and value using qsort */
	qsort(cards, count, sizeof(deck_node_t *), compare_cards);
	/* Reconstruct the doubly-linked list using the sorted array */
	for (i = 0; i < count - 1; ++i)
	{
		cards[i]->next = cards[i + 1];
		cards[i + 1]->prev = cards[i];
	}
	cards[count - 1]->next = NULL;
	*deck = cards[0];
	/* Free the array of pointers */
	free(cards);
}
