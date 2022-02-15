/*Write a menu driven program, consisting of following functions (on string),
without using any library functions :-
Strlen()          
Strcpy()
Strcat()
Strrev()
Strcmp()
*/

#include<stdio.h>
#include<string.h>
int main(){
	while(1){
	char str1[100],str2[100],str3[100];
	int n,i,j=0;
	int flag;
	printf("\n Enter your choice:\n 1.Strlen()\n 2.Strcpy()\n 3.Strcat()\n 4.Strrev()\n 5.Strcmp()\n" );
	scanf("%d",&n);
	printf("Chosen option is: No-%d\n\n", n);
	gets(str1);
	switch(n){
		case 1:
			printf("Enter the string:\n");
			gets(str1);
			for(i=0;str1[i]!='\0';i++){
			}
			printf("The string length: %d",i);
			break;
		case 2:
			printf("Enter the string:\n");
			gets(str1);
			for(i=0;str1[i]!='\0';i++){			 																												
				str2[i]=str1[i];
				}
				str2[i]='\0';	
				printf("After copy = %s",str2);
				break;
		case 3:
			printf("Enter the first string:\n");
			gets(str1);
			printf("Enter the second string:\n");
			gets(str2);
			int k=0;
			for(i=0;str1[i]!='\0';i++){
				str3[k++]=str1[i];
			}
			for(j=0;str2[j]!='\0';j++){
				str3[k+j]=str2[j];
			}
			str3[k+j]='\0';
			printf("After concatenation of %s and %s is: %s",str1,str2,str3);
			break;
		case 4: 
			printf("Enter the string:\n");
			gets(str1);
			for(i=0;str1[i]!='\0';i++){
			}
			int j;							
			printf("After reversing the string becomes:\n");
			for(j=i-1;j>=0;j--){
				printf("%c",str1[j]);
				}
			break; 
		case 5:
			flag=0;
			printf("Enter the first string:\n");
			gets(str1);
			printf("Enter the second string:\n");
			gets(str2);
			for(i=0;str1[i]!='\0' && str2[i]!='\0' || strlen(str1)!=strlen(str2);i++){
				if(str1[i]!=str2[i]){
					flag=1;
					break;
			}
			else {
				flag=0;
			}
		}
		        
 			if(flag==1)
				printf("%s and %s strings are not same.", str1, str2);
 	
 			if(flag==0)
  				printf("%s and %s strings are same.", str1, str2);
 				}
				 int k;
				 printf("\nEnter 0 to continue.\nEnter any key to Exit.");
				 scanf("%d",&k);
				 if (k==0)
				 {
					 continue;
				 }
				 else break;
				 
	}
 	return 0;
}
