#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 * Prints base10 number with a new line using putchar
*/
int main(void)
{
	int value = 48;

	while (value < 58)
	{
		putchar(value);
		value++;
	}

	putchar('\n');
	return (0);
}
