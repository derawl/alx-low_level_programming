#include "main.h"
/**
 * main - check the if character is upper case or not.
 *
 * Return: 0 or 1.
*/
int _isupper(int c){

    if((c >= 'A') && (c <= 'Z')){
        return(1);
    }
    return 0;
}
