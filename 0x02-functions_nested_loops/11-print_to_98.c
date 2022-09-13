#include <stdio.h>

/**
 * print_to_98 - prints number from n to 98.
 * @num: The variable number
*/

void print_to_98(int num)
{
	if (num >= 98)
	{
		while (num > 98){
			printf("%d, ", num--);
			printf("%d\num", num);
		}
	}

	else
	{
		while (num < 98){
			printf("%d, ", num++);
			printf("%d\num", num);
		}
	}
}
