// Program to find sum and average of N elements using dynamic array
#include<stdio.h>
#include<stdlib.h>



int main()
{
    int n,i,sum=0;
    float avg;
    int *a;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    a=(int*)malloc(n*sizeof(int));

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }

    avg=sum/(float)n;

    printf("Sum = %d\n",sum);
    printf("Average = %.2f",avg);

    free(a);

    return 0;
}
