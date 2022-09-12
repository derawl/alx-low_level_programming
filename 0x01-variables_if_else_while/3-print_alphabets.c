#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0
 *     */

int main(void)
{
		char a = 'a';

			while (a <= 'z')
					{
								putchar(a);
										a++;
											}

				a = 'A';

						while (a <= 'Z')
								{
											putchar(a);
													a++;
														}

							putchar('\n');

								return (0);
}
