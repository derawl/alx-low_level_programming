#include<stdio.h>
#include <stdlib.h>
/**
 * main - program that prints its name, followed by a new line
 * @argc: argument that counts argument input
 * @argv: argument that stores the strings in an array of char* (strings)
 * Return: 0
*/
int main(int argc, char *argv[])
{
    int num_1, num_2, result;
    if(argc != 3){
        printf("Error");
        return(1);
    }else{
        num_1 = atoi(argv[1]);
        num_2 = atoi(argv[2]);
        result = num_1 * num_2;
        printf("%d\n", result);
    }
    return(0);
}
