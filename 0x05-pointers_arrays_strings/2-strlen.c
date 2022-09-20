#include "main.h"

/**
 *swap_int - swaps values in address
 *@s: pointer to the string
 *Return: returns nothing
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
