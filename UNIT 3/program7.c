// Program to add two matrices using array of pointers
#include<stdio.h>
#include<stdlib.h>


int main()
{
    int r,c,i,j;
    int *a[10], *b[10], *sum[10];

    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
    {
        a[i]=(int*)malloc(c*sizeof(int));
        b[i]=(int*)malloc(c*sizeof(int));
        sum[i]=(int*)malloc(c*sizeof(int));
    }

    printf("Enter elements of first matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("Enter elements of second matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&b[i][j]);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            sum[i][j]=a[i][j]+b[i][j];

    printf("Sum of matrices:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",sum[i][j]);
        printf("\n");
    }

    return 0;
}
