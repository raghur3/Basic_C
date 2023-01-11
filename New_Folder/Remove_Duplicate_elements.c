#include <stdio.h>
int main() {
    int n, a[100], b[100], calc = 0, i, j,count;
    printf("Enter no. of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
          
    for (i = 0; i<n; i++) {
        for (j = 0; j<calc; j++) {
           if(a[i] == b[j])
           break;  
        }
        if (j== calc) {
             b[calc] = a[i];
             calc++; 
        }
     }
     
     printf("Array obtained after removing duplicate elements: ");
     for (i = 0; i<calc; i++) { 
            printf("%d ", b[i]);
     }
     return 0;
}
