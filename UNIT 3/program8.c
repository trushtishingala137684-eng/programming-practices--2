// Program to subtract two matrices using pointer to pointe
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int r,c,i,j;
    int **a, **b, **sub;

    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);

    a=(int**)malloc(r*sizeof(int*));
    b=(int**)malloc(r*sizeof(int*));
    sub=(int**)malloc(r*sizeof(int*));

    for(i=0;i<r;i++)
    {
        a[i]=(int*)malloc(c*sizeof(int));
        b[i]=(int*)malloc(c*sizeof(int));
        sub[i]=(int*)malloc(c*sizeof(int));
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
            sub[i][j]=a[i][j]-b[i][j];

    printf("Subtraction of matrices:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",sub[i][j]);
        printf("\n");
    }

    return 0;
}
