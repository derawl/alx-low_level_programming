#include "main.h"

/**
 * main - check the if character is digit or not.
 *
 * Return: 0 or 1.
*/

int _isdigit(int c){

    if((c >= 48) && (c <= 57))
    {
        return(1);
    }
    return 0;
}
