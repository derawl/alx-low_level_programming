#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*print_numbers - adds the unkown variables
*
*Return: numbers with separator
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list list;
    va_start(list, n);
    
    int i = 0;
    for(i = 0; i < n; i++)
    {
        printf("%d", va_arg(list, int));
        if(separator != NULL && i != n-1)
                printf("%s", separator);
    }
    printf("\n");
    
    va_end(list);
}
