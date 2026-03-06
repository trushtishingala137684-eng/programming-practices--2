// Program to find sum of odd and even numbers using dynamic array
#include<stdio.h>
#include<stdlib.h>


int main()
{
    int n,i;
    int evenSum=0, oddSum=0;
    int *a;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    a=(int*)malloc(n*sizeof(int));

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            evenSum = evenSum + a[i];
        else
            oddSum = oddSum + a[i];
    }

    printf("Sum of Even numbers = %d\n",evenSum);
    printf("Sum of Odd numbers = %d",oddSum);

    free(a);

    return 0;
}
