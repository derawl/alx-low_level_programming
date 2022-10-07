#include <stdio.h>
#include "main.h"
/*
* malloc_checked - returns address to memory allocation
*@b: param of address value
*/

 void *malloc_checked(unsigned int b)
 {
     void* p;
     
     p = malloc(b);
     if(p == NULL)
         exit(98);
     return p;
 }
