/*Write a program to take a line of text then convert all the alphabets of it to uppercase.*/

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    printf("Enter the string :");
    scanf("%s",&a);
    int i;
    for (i = 0; i < strlen(a); i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            a[i]=a[i]-32; 	//a-A=97-65
        }
    }
    puts(a);
    return 0;
}
