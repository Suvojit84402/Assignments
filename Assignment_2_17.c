/*Write a program to input a line from keyboard then encode it to its next alphabet or digits,
 then print the newly generated line
e.g. Input :--   today is 27 of September  Output:-- upebz jt 38 pg tfqufnafs
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    printf("Enter the string:");
    gets(a);
    int i;
    printf("The Resultant string is :\n");
    for (i = 0; i < strlen(a); i++)
    {
        if(a[i]!=' '&&a[i]!='Z'&&a[i]!='z'&&a[i]!='9')
        {
            a[i]=a[i]+1;
        }
        else if(a[i]=='Z'||a[i]=='z'){
        	a[i]=a[i]-25;
		}
		else if(a[i]=='9'){
			a[i]=a[i]-9;
		}
    }
    puts(a);
    return 0;
}
