//C Program To Find Largest of Three Numbers (Simple Way)

#include<stdio.h>
void main()
{
  // Variable declaration
   int a,b,c, larg;

   printf("Enter Three Number\n");
   scanf("%d %d %d",&a,&b,&c);

  // larg among a, b and c
  if(a>b)
  {
      if(a>c)
        larg = a;
      else
        larg = c;
  }
  else
  {
      if(b>c)
        larg = b;
      else
        larg = c;
  }

  //Display Largest number
    printf("Largest Number is : %d",larg);

}