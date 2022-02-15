/*Write a program (W.A.P.) to take one string then  print it in the reverse order 
and check whether the input string is Plindrome.*/

#include <stdio.h>
#include <string.h>
int main(){
int l;
char str[100];
    printf("Enter the string:\n");
    gets(str);
    l = strlen(str);
    l = l -1;
int k=0;
	while(l > k){
    	if(str[l]!= str[k]){
    		printf("%s is not palindrome.",str);
    		break;
    	}
    l--;
    k++;
    printf("%s is palindrome.", str);
    break;
    }
    return 0;
    }   
