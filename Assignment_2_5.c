/*Write a program to search an element in the array.
 If it is  found, print index else print "number is not found".*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[100];
    printf("Enter the numbers:\n");
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    printf("Enter the key for search:");
    scanf("%d",&k);
    for (i = 0; i < n; i++)
    {
        if (a[i]==k)
        {
            printf("The index is:%d",i+1);
            return 0;
        }
        
    }
    printf("Number is not found!");
    return 0;
}
