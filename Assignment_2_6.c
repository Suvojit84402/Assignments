/*Write the number of vowels & consonants of any entered line of  any input string.*/

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    printf("Enter the string:");
    gets(a);
    int i=0;
    int j=0;
    int l=0;
    while (a[i]!='\0')
    {
        if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        {
           j++; 
        }
        else if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
        l++;
        i++;
    }
    printf("The no of vowels of the string is:%d\n",j);
    printf("The no of consonants of the string is:%d",l);
    return 0;
}
