#include<stdio.h>
void main()
{
        int n,result=1;
        printf("Enter the number:\n");
        scanf("%d",&n);
        if(n<=0)
        {
                printf("%d Is Negative Number, Please Enter The Possitive Number..\n",n);
        }
        while(result < n)
        {
                result = result * 2;
        }
        if(result == n)
        {
                printf("%d Is Power of 2...\n",n);
        }
        else
        {
                printf("%d Is Not Power Of 2   Bye.......\n",n);
        }
}