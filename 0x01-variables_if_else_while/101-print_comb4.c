#include <stdio.h>

/**
 * main - prints out all the numbers between 00 and 99
 * with no two digits being the same
 *
 * Return: 0
*/
int main(void)
{
	int i, j, k;

	for (i = 48; i < 58; i++)
	{
		for (j = i; j < 58; j++)
		{
			for (k = j; k < 58; k++)
			{
				if (i == j || i == k || j == k)
				{
					continue;
				}

				putchar(i);
				putchar(j);
				putchar(k);

				if (i == 56 && j == 57 && k == 57)
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
