#include <stdio.h>
/**
 *  print_dog - prints details of struct dog
 * @d: struct
 * Return: pointer to the struct dog.
*/
void print_dog(struct dog *d)
{
    printf ("Name: %s\n", (*d).name);
    printf ("Age: %lf\n", (*d).age);
    printf ("Owner: %s\n", (*d).owner);
}
