#include <stdio.h>
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
        printf ("Owner: %s\n", (*d).owner);
        if(d->name == NULL)
                printf ("Age: (nil)\n");
        else
                printf ("Age: %lf\n", (*d).age);
    }
}
