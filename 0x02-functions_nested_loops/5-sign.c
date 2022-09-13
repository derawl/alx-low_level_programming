#include "main.h"
/**
 * print_sign - checks for a sign of a number
 * @num:  is the int that will use for the argument of the function
 * Return: 0
 */
int print_sign(int num)
{
	if (num > 0)
	{
	_putchar('+');
	return (1);
}
	else if (num < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
