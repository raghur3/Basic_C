#include<stdio.h>
int main()
{
    // Initializing variable.
    char str[100];  
    int i, vowels = 0;
    
    // Accepting input.
    printf("Enter the string: ");
    // best way to read string rather than gets/fgets
    scanf("%s",str);
    
    //Initializing for loop. 
    for(i = 0; str[i]!='\0'; i++)  
    {
        //Counting the vowels.
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||
           str[i]=='o'|| str[i]=='u'||str[i]=='A'||
           str[i]=='E'||str[i]=='I'||str[i]=='O' ||str[i]=='U')
        {
            vowels++;
			printf("Vowel in the given string %c\n",str[i]);
        }
    }
 	
    //Printing the count of vowels.
    printf("Total number of vowels: = %d\n",vowels);
    
    return 0;
}