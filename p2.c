#include <stdio.h>
void main() 
{
    int n, i, j, temp;
    int a[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Entered numbers are:\n");
    for (i = 0;i < n;i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\nBubble sort\n");
    for (i = 1; i < n ; i++)
     {
        for (j = 0; j < n - i; j++) 
        {
            if (a[j] > a[j + 1])
             {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Sorted numbers:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
}
