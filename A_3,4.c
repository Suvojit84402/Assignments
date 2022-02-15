#include<stdio.h>
#include<string.h>
void string_length(char*str1){
				int i;
			for(i=0;str1[i]!='\0';i++){
			}
			printf("The string length: %d",i);
}
void string_copy(char*str1,char*str2){
				int i;
			for(i=0;str1[i]!='\0';i++){			 																												
				str2[i]=str1[i];
				}
				str2[i]='\0';	
				printf("After copy = %s",str2);
}
void string_concatination(char*str1, char*str2, char*str3){
			int i=0;
			int j=0;
			int k=0;
			for(i=0;str1[i]!='\0';i++){
				str3[k++]=str1[i];
			}
			for(j=0;str2[j]!='\0';j++){
				str3[k+j]=str2[j];
			}
			str3[k+j]='\0';
			printf("After concatenation of %s and %s is: %s",str1, str2, str3);
}
void string_rev(char*str1){
	int i;
	for(i=0;str1[i]!='\0';i++){
			}
			int j;							
			printf("After reversing the string becomes:\n");
			for(j=i-1;j>=0;j--){
				printf("%c",str1[j]);
				}
}
void string_compare(char*str1,char*str2){
	int flag;
	int i;
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

int main(){
	
	int a,z;
	char str1[100],str2[100],str3[100];
	while (1)
	{
	printf("\nEnter your choice: \n");
	printf("\n1.strlen() \n2.strcpy() \n3.strcat() \n4.strrev() \n5.strcmp()\n");
	scanf("%d",&a);
	gets(str1);
	switch(a){
		case 1: printf("Enter the string:\n");
				gets(str1);
				string_length(str1);
				break;
		case 2: printf("Enter the string: \n");
				gets(str1);
				string_copy(str1,str2);
				break;
		case 3: printf("Enter the first string:\n");
			gets(str1);
			printf("Enter the second string:\n");
			gets(str2);
			string_concatination(str1,str2,str3);
			break;
		case 4: printf("Enter the string:\n");
			gets(str1);
			string_rev(str1);
			break;
		case 5: printf("Enter the first string:\n");
			gets(str1);
			printf("Enter the second string:\n");
			gets(str2);
			string_compare(str1,str2);
			break;
				
		default : printf("Wrong Choice!");
					break;
	}
	printf("\nPress 1 to continue;\nPress any key to exit.");
	scanf("%d",&z);
	if (z==1)
	{
		continue;
	}
	else 
	break;
	}
	
	return 0;
	}
	
