#include "main.h"

/**
 *_puts - prints a string in reverse
 *@s: args str
 *Return: returns void
 */

void print_rev(char *s)
{

	int i;

	while (s[i] != '\0')
	{
		i++;
	}

	i--;

	while (s[i] != '\0')
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}
