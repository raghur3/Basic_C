//C program to find Smallest among three numbers 

#include<stdio.h>
void main()
{
  // Variable declaration
   int a,b,c, small;

   printf("Enter Three Number\n");
   scanf("%d %d %d",&a,&b,&c);

  // Small among a, b and c
  if(a<b)
  {
      if(a<c)
        small = a;
      else
        small = c;
  }
  else
  {
      if(b<c)
        small = b;
      else
        small = c;
  }

  //Display smallest number
    printf("Smallest Number is : %d",small);

}