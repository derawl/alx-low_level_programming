#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 * Prints number with a new line using putchar
*/
int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha--);
	}

	putchar('\n');

	return (0);
}
