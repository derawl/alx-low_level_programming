#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/*
* - print_listint: prints elements of linked list
* @h: head pointer
* - Returns: nothing
*/

void print_listint(const listint_t *h)
{
    listint_t temp;
    
    temp = h;
    
    //node b
    while(temp != NULL)
    {
        printf("%d\n", temp->value);
        temp = temp->pointer;
    }
}
