/*Write a program to insert an element in the array such that the resultant array remain sorted*/


#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[100];
    printf("Enter the numbers:\n");
    int i,j;
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    printf("Enter the number for inserting in the array:");
    scanf("%d",&k);
    a[n]=k;
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n+1; j++)
        {
            if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
        
    }
    for (i = 0; i < n+1; i++)
    {
        printf("%d ",a[i]);
    }
    
    
    return 0;
}
