/*Write a program to multiply two n x n matrices.*/

#include<stdio.h>
int main()
{
    int n;
    printf("enter the row and column of the matrix:");
    scanf("%d",&n);
    int a[100][100];
    printf("enter the matrix A:\n");
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    int b[100][100];
    printf("enter the matrix B:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int c[100][100];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            int s=0;
            for (k = 0; k < n; k++)
            {
                s=s+a[i][k]*b[k][j];
            }
            c[i][j]=s;
        }
    }
    printf("the multiplcation of A and B is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
