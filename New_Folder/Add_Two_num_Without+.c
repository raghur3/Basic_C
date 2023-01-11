// Add Two Numbers Without Using the Addition Operator
#include<stdio.h>#include<stdlib.h>intmain(){
  intx, y;
  printf("Enter two number: ");
  scanf("%d %d",&x,&y);
// method 1printf("%d\n", x-(-y));
// method 2printf("%d\n", -(-x-y));
// method 3printf("%d\n", abs(-x-y));
// method 4printf("%d", x-(~y)-1);
return0;
}
