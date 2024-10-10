// A program to sort array by selection sort.
// Author - Vedika Udgir

#include <stdio.h>

void main()
{
    int i, j, n, temp;

    printf("Enter number of elements in array.");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("\nEnter element element no. %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n - 1; j++)
        {
            if (a[j] > a[i])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted array is - \n");
    for (i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}