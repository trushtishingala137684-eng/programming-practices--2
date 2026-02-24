#include<stdio.h>

 int main()
{
    int a[5],i;

        printf("enter 5 element:\n");
        for(i=0; i<5;i++)
        {
            scanf("%d",&a[i]);
        }

        printf("element of the 1-D matrix are:\n");
        for(i=0; i<5; i++)
        {
            printf("%d",a[i]);
        }
        return 0;
    }
