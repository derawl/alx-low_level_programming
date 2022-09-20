#include "main.h"

/**
 *swap_int - swaps values in address
 *@s: args s
 *Return: returns string length
 */

int _strlen(char *s)
{
	int len;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
