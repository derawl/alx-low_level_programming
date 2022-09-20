#include "main.h"
#include <string.h>
/**
 *print_rev - Prints a string in reverse order
 *@s: args s string to resverse
 *Return: returns void
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		_putchar(*(s + len));
	_putchar(10);
}
