//C Program To Find Fibonacci Series Using For Loop

#include<stdio.h>
int main()
{

//variable declaration
 int a=-1,b=1,c,i,number;

 //input number
 printf("Enter the number : ");
 scanf("%d",&number);

printf("Fibonacci Series : ");

 for(i=1;i<=number;++i)
 {
  c=a+b;
  printf(" %d",c);
  a=b;
  b=c;
 }
  return 0;
 }