#include <stdio.h>
#include "dog.h"
/**
 *init_dog - returns a struct of dog
 *@d: struct
 *@name: dog's name
 *@owner: dog owner
 *
 *Return: void.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
        if (d == 0)
                return;
        d->name = name;
        d->age = age;
        d->owner = owner;
}
