/*W.A.P. to generate the  Pascal’s triangle :-- 
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1…..upto 10 lines
*/

#include<stdio.h>
int fac(int n)
{
    if (n==0)
    {
        return 1;
    }
    return n*fac(n-1);
}
int com(int n,int r)
{
    int k=fac(n)/(fac(r)*fac(n-r));
    return k;
}
int main()
{
    int n, i, j;
    printf("enter the number:");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d ",com(i,j));
        }
        printf("\n");
    }
    return 0;
}
