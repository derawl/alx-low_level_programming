#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @str: string to print
 *
 * Return: nothing
 */

void rev_string(char *str)
{
	int len;
	int i;

	while (*(str + len) != '\0')
	{
		len++;
		i++;
	}

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		putchar(*(str + i));
	putchar(10);
}

