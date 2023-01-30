//C Program to Calculate Power of a Number Using For Loop

#include <stdio.h>
void main()
{
  int base, n, i;
	int result = 1;

	printf("Enter the base number : ");
	scanf("%d", &base);

	printf("Enter power number : ");
	scanf("%d", &n);

  for(i=1; i<=n; i++)
    {
        result = result*base;
    }

	printf("Given number is %d and power is %d and result is : %d",base, n, result);

}