#include<stdio.h>
#include<stdlib.h>
void read(int a[10][10],int m,int n)
{
		int i,j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void print(int a[10][10],int m,int n)
{
		int i,j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
void mul(int a1[10][10],int m1,int n1,int a2[10][10],int m2,int n2)
{
		int i,j,k;
    if(m2==n1)
    {
    int b[10][10];
    
        for (i = 0; i < m1; i++)
        {
            for (j = 0; j < n2; j++)
            {
                int s=0;
                for (k = 0; k < n1; k++)
                {
                   s+=a1[i][k]*a2[k][j]; 
                }
                b[i][j]=s;
            }
        } 
        printf("The multplication of the matrices is:\n");
        print(b,m1,n2);
    }
    else
      printf("Matrix multiplication is not possible");
}
int main()
{
    int a[10][10];
    int m1,n1;
    printf("Enter the row of matrix A: ");
    scanf("%d",&m1);
    printf("Enter the column of matrix A: ");
    scanf("%d",&n1);
    printf("Enter the matrix A:\n");
    read(a,m1,n1);
    int b[10][10];
    int m2,n2;
    printf("Enter the row of matrix B: ");
    scanf("%d",&m2);
    printf("Enter the column of matrix B:");
    scanf("%d",&n2);
    printf("Enter the matrix B:\n");
    read(b,m2,n2);
    printf("The Matrix A is: \n");
    print(a,m1,n1);
    printf("The Matrix B is: \n");
    print(b,m2,n2);
    mul(a,m1,n1,b,m2,n2);
    return 0;
}
