//C Program To Print Odd Numbers Between 1 To 100 Using For Loop

#include<stdio.h>

void main()
{
    int i;

    for(i=1;i<=100;i++)
    {
        if(i%2!=0)
        {
            printf("%d \n",i);
        }
    }
}