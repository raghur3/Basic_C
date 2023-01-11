#include<stdio.h>intmain(){
   intx;
   printf("Enter a number: ");
   scanf("%d",&x);
   printf("%d", x<<1);
   return0;
}



//The left shift operator shifts all bits towards the left by a certain number of specified bits. The expression x<<1 always returns x*2. Note that the shift operator doesn’t work on floating-point values.
//For multiple of x by 4, use x<<2. Similarly x<<3 multiply x by 8. For multiple of the number x by 2^n, use x<<n.
