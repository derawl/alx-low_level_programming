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
    int num_1, num_2, result;
    if(argc == 2){
        printf("0\n");
    }else if(isdigit(atoi(argv[0])) == 1 && isdigit(atoi(argv[1])) == 1){
        puts("Error");
		return (1);
    }
    else{
        num_1 = atoi(argv[1]);
        num_2 = atoi(argv[2]);
        result = num_1 + num_2;
        printf("%d\n", result);
    }
    return(0);
}
