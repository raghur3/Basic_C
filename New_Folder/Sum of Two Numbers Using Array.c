//C Program to Find the Sum of Two Numbers Using Array

#include<stdio.h>
int main()
{
  //Declaring  Variables

   int i, sum = 0, a[2];

//Input Numbers
   printf("Enter Two Numbers : \n");
   for(i=0; i<2; i++)
   {
    scanf("%d",&a[i]);
   }

//Calculating Sum
   for(i=0; i<2;i++)
   {
    sum = sum + a[i];
   }
   printf("Sum is : %d", sum);

 return 0;
}