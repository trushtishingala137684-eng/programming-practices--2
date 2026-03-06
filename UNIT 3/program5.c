// Program to find sum of prime numbers using dynamic array
#include<stdio.h>
#include<stdlib.h>


int prime(int n)
{
    int i;
    if(n<=1)
        return 0;

    for(i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int n,i,sum=0;
    int *a;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    a=(int*)malloc(n*sizeof(int));

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        if(prime(a[i]))
            sum=sum+a[i];
    }

    printf("Sum of prime numbers = %d",sum);

    free(a);

    return 0;
}
