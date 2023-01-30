//Write A C Program to Check Leap Year Using if else 

#include<stdio.h>
void main()
{
   int year;
   printf("Enter The Year\n");
   scanf("%d",&year);

  if(year%100==0)
   {   if(year%400==0)
        printf("Leap year");
       else
        printf("Not a Leap year");
   }
  else
   { if(year%4==0)
       printf("Leap year");
    else
        printf("Not a Leap year");
   }
}