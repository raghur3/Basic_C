//C Program To Check Vowel or Consonant Using If else Statement 

#include <stdio.h>
void main()
{
  char ch;

  printf("Enter a character : ");
  scanf("%c", &ch);

  // Checking both lower and upper case, || is the OR operator

  if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U')
    printf("%c is a vowel.\n", ch);
  else
    printf("%c isn't a vowel it is a Consonant\n", ch);

}