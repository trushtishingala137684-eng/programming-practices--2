// Program to find maximum and minimum number using pointer and function
#include<stdio.h>


void findMaxMin(int *arr, int n, int *max, int *min)
{
    int i;

    *max = *min = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > *max)
            *max = arr[i];

        if(arr[i] < *min)
            *min = arr[i];
    }
}

int main()
{
    int arr[100], n, i;
    int max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    findMaxMin(arr, n, &max, &min);

    printf("Maximum number = %d\n", max);
    printf("Minimum number = %d\n", min);

    return 0;
}
