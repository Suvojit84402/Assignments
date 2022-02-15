#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *file1, *file2, *fnew;
	char ch;
	file1=fopen("class1.txt", "r");
	file2=fopen("class2.txt", "r");
	if(file1==NULL || file2==NULL)
	{
		printf(" File does not exist or error in opening...!!\n");
		exit(1);
	}
	fnew=fopen("class.txt", "w");
	if(fnew==NULL)
	{
		printf(" File does not exist or error in opening...!!\n");
		exit(1);
	}
	while((ch=fgetc(file1))!=EOF)
	{
		fputc(ch, fnew);
	}
	while((ch=fgetc(file2))!=EOF)
	{
		fputc(ch, fnew);
	}
	   
	printf(" The two files merged into class.txt file successfully..!!\n\n");
	fclose(file1);
	fclose(file2);
	fclose(fnew);
}
/*#include <stdio.h>
int main()
{ 
FILE *fileA, *fileB, *fileC;
char num1, num2, f1, f2;
fileA = fopen("class1.txt","r");
fileB = fopen("class2.txt","r");
fileC = fopen("class.txt","w");

f1 = fscanf(fileA, "%c", &num1);
f2 = fscanf(fileB, "%c", &num2);
while ((f1!=EOF) && (f2!=EOF))
{
    if (num1 < num2)
    {
        fprintf(fileC,"%c\n", num1);
        f1 = fscanf(fileA, "%c", &num1);
        }
        else if (num2 < num1) 
        {
             fprintf(fileC,"%c\n", num2);
             f2 = fscanf(fileB, "%c", &num2);
             }
else { 
fprintf(fileC,"%c\n", num1);
f1 = fscanf(fileA, "%c", &num1);
f2 = fscanf(fileB, "%c", &num2);
}
}

while (f1!=EOF)
{
    fprintf(fileC,"%c\n", num1);
    f1 = fscanf(fileA, "%c", &num1);
    }
    while (f2!=EOF){ 
        fprintf(fileC,"%c\n", num2);
        f2 = fscanf(fileB, "%c", &num2);
        }
        fclose(fileA);
        fclose(fileB);
        fclose(fileC);
return 0;
}*/