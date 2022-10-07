// Online C compiler to run C program online
#include <stdio.h>
/*
* malloc_checked - returns address to memory allocation
*@b: param of address value
*/

 void *malloc_checked(unsigned int b)
 {
     int* p;
     
     p = (int) malloc(sizeof(unsigned int));
     if(p == NULL)
     {
         return 98;
     }
     return p;
 }
