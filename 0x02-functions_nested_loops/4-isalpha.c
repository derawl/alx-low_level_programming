#include "main.h"
/**
 * _isalpha function - checks if var is a letter, lowercase or uppercase
 * @var: is the int that will use for the argument of the function
 * Return: 0
 */
int _isalpha(int var)
{
	if ((var >= 'a' && var <= 'z') || (var >= 'A' && var <= 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
