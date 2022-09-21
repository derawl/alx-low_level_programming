#include "main.h"
#include <stdio.h>
/**
 * main - concatenate strings
 *@dest: str
 *@src: str
 * Return: pointer to dest string.
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, len2 = 0;

	while(dest[i++])
		len2++;
	

	for(i = 0; src[i]; i++){
		dest[len2++] = src[i]
	}

	return(dest);
}
