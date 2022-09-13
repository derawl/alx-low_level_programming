#include "main.h"
/**
 * prnumnt_alphabet_x10 - print the alphabet 10 times
 *
 * Return: 0
 */
void prnumnt_alphabet_x10(void)
{
	char alpha, num;

	for (num = 0; num <= 9; num++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
