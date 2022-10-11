#include <stdio.h>
/**
 *  init_dog - returns a struct of dog
 * @d: struct
 * @name: dog's name
 * @owner: dog owner
 * Return: pointer to the struct dog.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    d->name = name;
    d->age = age;
    d->owner = owner;
    
    return d;
}
