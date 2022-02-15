#include<stdio.h>
#include<string.h>
int vowel_cons_count(char*p){
	int x;
	int vowel=0;
	int consonent=0;
	for(x=0;p[x];x++){
		if((p[x]>='A' && p[x]<='Z') || (p[x]>='a' && p[x]<='z'))
		{
			if (p[x]=='A'||p[x]=='E'||p[x]=='I'||p[x]=='O'||p[x]=='U'||p[x]=='a'||p[x]=='e'||p[x]=='i'||p[x]=='o'||p[x]=='u')
			vowel++;
			else consonent++;
		}
	}
	return (vowel-consonent);
}
	int main(){
		char p[500];
		printf("Enter the string: ");
		gets(p);	
		int q=vowel_cons_count(p);
		printf("Vowel= %d\n",((q+strlen(p))/2));
		printf("Consonent= %d\n",((strlen(p)-q)/2));
	return 0;	
	}
