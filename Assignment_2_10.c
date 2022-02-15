/*Write a program to find norm of matrix
Norm of matrix= square root of sum of square of all elements in the matrix
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int m,n;
    printf("Enter the no. of row of the matrix:");
    scanf("%d",&m);
    printf("No. of column of the matrix:");
    scanf("%d",&n);
    int a[100][100];
    printf("Enter the matrix:\n");
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    int s=0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            s=s+a[i][j]*a[i][j];
        }
    }
    float f=sqrt(s);
    printf("the norm of the matrix is:%f",f);
    return 0;
}
