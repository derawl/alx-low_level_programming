// Online C compiler to run C program online
#include <stdio.h>
/*
* malloc_checked - returns address to memory allocation
*@b: param of address value
*/

 void *malloc_checked(unsigned int b)
 {
     int* p;
     
     p = (int) malloc(b);
     if(p == NULL)
         exit(98);
     return p;
 }
