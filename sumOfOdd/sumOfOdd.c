// Programm to calculate sum of all odd elements of an array.
// Author - Vedika Udgir.

#include <stdio.h>

void main()
{
    int a[10];
    int n,i,sumO=0;

    printf("\nEnter n - ");
    scanf("%d",&n);

    for(i=0;i <= n-1;i++)
    {
        printf("\nEnter element no. %d. ",i);
        scanf("%d",&a[i]);
        
        if(a[i]%2 != 0)
        {
        sumO += a[i];
        }
    }

    printf("\n The sum of the elements of the array are is - %d",sumO);
}