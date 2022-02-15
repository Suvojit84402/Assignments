/*Write a program to take an array of numbers and sort in descending order*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int a[100];
    printf("Enter the numbers:\n");
    int i,j;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The decending order value is:\n");
    for (i = 0; i < n - 1; i++)
    {
        for (j = i; j < n - 1; j++)
        {
            if (a[i] < a[j + 1])
            {
                int t = a[i];
                a[i] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
//Assending order
/*#include<stdio.h>
int main()
{
int arr1[10];
int n,i,j,tmp;
printf("\nsort elements of array in ascending order:\n");
printf("Input the size of array : ");
scanf("%d",&n);
printf("Input %d elements in the array :\n",n);
for(i=0;i<n;i++)
{
printf("element -%d : ",i);
scanf("%d",&arr1[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr1[j]<arr1[i])
{
tmp =arr1[i];
arr1[i]=arr1[j];
arr1[j]=tmp;
}
}
}
printf("\nElements of array in sorted ascending order:\n");
for(i=0;i<n;i++)
{
printf("%d ",arr1[i]);
}
printf("\n\n");
return 0;
}*/
