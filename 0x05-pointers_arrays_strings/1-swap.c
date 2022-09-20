#include "main.h"

/**
 *swap_int - swaps values in address
 *Return: returns nothing
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;
	*a = d;
	*b = c;
}
