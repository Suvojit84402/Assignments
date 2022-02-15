/*Write a program to convert the capital letters of any string 
to small letter and vice-versa, finally print the changed string.*/

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    printf("Enter the string: ");
    gets(a);
    int i;
    for (i = 0; i < strlen(a); i++)
    {
        if(a[i]>='a'&&a[i]<'z')
        {
            a[i]=a[i]-32;
        }
        else if(a[i]>='A'&&a[i]<'Z')
        {
            a[i]=a[i]+32;
        }
    }
    printf("The resultant string is: ");
    puts(a);

    return 0;
}
