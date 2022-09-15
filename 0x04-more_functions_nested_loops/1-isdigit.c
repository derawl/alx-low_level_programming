#include "main.h"

/**
* _isdigit - check the if character is digit or not.
*@c: tested character
* Return: 1 if is digit and zero if it isn't.
*/

int _isdigit(int c){

    if((c >= 48) && (c <= 57))
    {
        return(1);
    }
    return 0;
}
