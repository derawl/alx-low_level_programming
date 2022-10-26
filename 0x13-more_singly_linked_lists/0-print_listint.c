#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/*
* - print_listint: prints elements of linked list
* @h: head pointer
* - Returns: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
