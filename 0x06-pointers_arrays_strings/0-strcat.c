#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - concatenate strings
 *@dest: str
 *@src: str
 * Return: pointer to dest string.
*/
char *_strcat(char *dest, char *src)
{
	int len1 = strlen(*dest);
	int len2 = strlen(*src);
	int i;

	for(i = 0; i < len2; i++){
		*dest[len1+i] = *src[i]
	}

	return *dest;
}
