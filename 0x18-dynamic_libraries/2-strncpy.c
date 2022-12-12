#include "main.h"
#include <stdio.h>

/**                                                                                                                                  
 * _strncat - Concatenates two strings using at most                                                                                 
 *            an inputted number of bytes from src.                                                                                  
 * @dest: The string to be appended upon.                                                                                            
 * @src: The string to be appended to dest.                                                                                          
 * @n: The number of bytes from src to be appended to dest.                                                                          
 *                                                                                                                                   
 * Return: A pointer to the resulting string dest.                                                                                   
 */                                                                                                                                  
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0' ; index++)
	{
		dest[index] = src[index];
	}
	for (; index  < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
