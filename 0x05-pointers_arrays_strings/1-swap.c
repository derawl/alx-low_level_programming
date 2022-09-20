#include "main.h"

/**
 *swap_int - swaps values in address
 *@a: pointer to variable a
 *@b: pointer to variable b
 *Return: returns nothing
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;
	*a = d;
	*b = c;
}
