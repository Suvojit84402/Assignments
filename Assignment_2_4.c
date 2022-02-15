/*Write a program to swap odd positioned numbers with even positioned number in a array*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of the array:");
    scanf("%d", &n);
    int a[100];
    printf("enter the numbers:\n");
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    if (n % 2 == 0)
    {
        for (i = 0; i < n; i = i + 2)
        {
            int t = a[i];
            a[i] = a[i + 1];
            a[i + 1] = t;
        }
    }
    else
    {
        for (i = 0; i < n - 1; i = i + 2)
        {
            int t = a[i];
            a[i] = a[i + 1];
            a[i + 1] = t;
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
