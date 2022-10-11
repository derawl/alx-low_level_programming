#include <stdio.h>
#include <stdlib>
#include "dog.h"
/**
 *print_dog - prints details of struct dog
 *@d: pointer to struct
 *
 *Return: pointer to the struct dog.
*/
void print_dog(struct dog *d)
{
    if (d->name == 0)
    {
       return;
    }
    else
    {
        if(d->name == NULL)
                printf ("Name: (nil)\n");
        else
                printf ("Name: %s\n", (*d).name);
        printf ("Age: %s\n", (*d).age);
        if(d->name == NULL)
                printf ("Owner: (nil)\n");
        else
                printf ("Owner: %lf\n", (*d).owner);
    }
}
