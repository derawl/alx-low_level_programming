#include "main.h"
/**
 * _islower - function to check for lowercase character
 * @cha:  is the int that will use for the argument of the function
 * Return: 0
 */
int _islower(int cha)
{
	if (cha >= 'a' && cha <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
