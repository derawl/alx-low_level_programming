#include "main.h"
/**
 * print_alphabet - prints the letters of the alphabeth
 *
 * Return: 0
*/

void print_alphabet(void)
{
	char value;

	for (value = 'a'; value <= 'z'; value++)
	{
		_putchar(value);
	}
_putchar('\n');
}
