#include <stdio.h>
#include <stdarg.h>

/*
*sum - adds the unkown variables
*
*Return: 0 if n is 0, sum if n is not 0
*/

int sum_them_all(const unsigned int n, ...)
{
    va_list list;
    va_start(list, n);
    
    if(n == 0)
            return (0);
    
    //process
    int i = 0, sum = 0;
    for(i = 0; i < n; i++)
    {
        sum += va_arg(list, int);
    }
    va_end(list);
    
    return (sum);
}
