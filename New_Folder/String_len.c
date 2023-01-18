// To find String length...In C.....
#include <stdio.h>  
#include <string.h>  
int len(char str[]);
int main()
{
    char s1[50];
    int i;
    printf("Enter the String For len..\n");
    scanf("%s",s1);
    len(s1);
}
int len(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
     i++;   
     
    }
    printf("Given string count is %d\n",i);
}