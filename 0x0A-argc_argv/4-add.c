#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds numbers
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
    int i;
    int result = 0;
    for (i = 1; i < argc; i++)
    {
        if (argc == 0)
        {
            printf("0\n");
            return(0);
        }
        else if (isdigit(atoi(argv[i])) == 1)
        {
            puts("Error");
            return (1);
        }
        else{
                result += atoi(argv[i]);
            
        }
    }
    printf("%d\n", result);
    return (0);
}
