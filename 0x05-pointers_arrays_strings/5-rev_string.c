#include "main.h"

/**
 *rev_string - reverses a string
 *@s: args s string
 *Return: returns void
 */

void rev_string(char *s)
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
