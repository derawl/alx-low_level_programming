#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements
 *               in a linked  of type listint_t list.
 * @h: A pointer to the head.
 *
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
