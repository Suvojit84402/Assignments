/*Write a program to find transpose of matrix*/

#include <stdio.h>
int main()
{
    int m, n;
    printf("enter the no. of row of the matrix:");
    scanf("%d", &m);
    printf("no. of column of the matrix:");
    scanf("%d", &n);
    int a[100][100];
    printf("enter the matrix:\n");
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = i; j < n; j++)
        {
            int t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }
    }
    printf("the transpose of the matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
