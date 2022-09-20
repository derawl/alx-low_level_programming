#include "main.h"

/**
 *swap_int - swaps values in address
 *@str: args str
 *Return: returns string length
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
