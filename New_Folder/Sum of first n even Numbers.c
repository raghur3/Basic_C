//C Program to Find the Sum of first n even Numbers Using For Loop

#include<stdio.h>
void main()
{
 //Declaring Variable
  int n, i, sum = 0 ;

//Input Number
 printf("Enter a Number\n");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
  {   if(i%2==0)
      { sum = sum + i;
      }
  }
  printf("\nSum of first %d even Numbers: %d",n,sum);

}