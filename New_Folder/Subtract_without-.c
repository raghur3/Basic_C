#include<stdio.h>#include<stdlib.h>intmain(){
   intx, y;
   printf("Enter two number: ");
   scanf("%d %d",&x,&y);
   printf("%d", x+(~y)+1);
   return0;
}
