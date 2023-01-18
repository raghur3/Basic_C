// Reverse the given string...In C.....
#include <stdio.h>  
#include <string.h>  
int rev(char str[]);
int main()
{
    char s1[50];
    int i;
    printf("Enter the String For len..\n");
    scanf("%s",s1);
    printf("Before reversing the string is..%s\n",s1);
    rev(s1);
}
int rev(char str[])
{
    int i=0;
    char temp;
    int j = strlen(str)-1;
    while(i<j)
    {
      temp=str[j];
      str[j]=str[i];
      str[i]=temp;
      i++;
      j--;
    }
    printf("Given string in reversed.. %s\n",str);
}