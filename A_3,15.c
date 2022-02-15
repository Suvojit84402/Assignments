#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[30];
    int rollnumber;
    float marks;
} a[100], b;
int main()
{
    FILE *fp, *fr;
    int c;
    fp = fopen("data.bin", "wb");
    if (fp == NULL)
    {
        printf("ERROR! opening file");
        exit(1);
    }
    int i, j, n;
    printf("Total no of students :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("\nEnter Name of Student %d : ", i );
        fflush(stdin);
        scanf("%s", a[i].name);
        fprintf(fp, "Name : %s", a[i].name);
        printf("Enter Roll Number : ");
        scanf("%d", &a[i].rollnumber);
        fprintf(fp, "\nRoll number : %d", a[i].rollnumber);
        printf("Enter Marks Obtained : ");
        scanf("%f", &a[i].marks);
        fprintf(fp, "\nMarks : %.2f \n\n", a[i].marks);
    }
    
    printf("\nSearch the information for a student whose Roll Number : ");
    scanf("%d", &b.rollnumber);
    fr = fopen("data.bin", "rb");
    if (fr == NULL)
    {
        puts("Input Binary file is having issues while opening");
        exit(1);
    }
    printf("Student Information : ");
    for (i = 1; i <= n; i++)
    {
        if (a[i].rollnumber == b.rollnumber)
        {
            printf("Name : %s \nRoll number : %d \nMarks : %.2f \n", a[i].name, a[i].rollnumber, a[i].marks);
            
        }
        
    
    }
    
            
            
    fclose(fp);
    fclose(fr);
    return 0;
}




/*#include <stdio.h>
typedef struct
{
	int r, m;
	char name[50];
} STUDENT;
void main()
{
	int n, i, k;
	STUDENT s[6], s1[6], roll;
	FILE *fp;
	fp = fopen("student.dat", "wb");
	printf("enter the number of student:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("Enter information for student- %d", i);
		printf("\nenter the student name:");
		fflush(stdin);
		gets(s[i].name);
		printf("enter roll number:");
		scanf("%d", &s[i].r);
		printf("enter marks:");
		scanf("%d", &s[i].m);
	}
	fwrite(&s, sizeof(s), n, fp);
	rewind(fp);
	fread(&s1, sizeof(s1), n, fp);
	printf("Enter the roll no whose info you want:");
	scanf("%d", &roll.r);
	for (i = 1; i <= n; i++)
	{
		if (s1[i].r == roll.r)
			k = i;
	}
	printf("student name=%s\nstudent roll=%d\nstudent marks=%d", s1[k].name, s1[k].r, s1[k].m);
	fclose(fp);
}*/
/*#include <stdio.h>
#include<stdlib.h>
int main() {
	char name[50];
	int marks,rollno,i,n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	FILE *fptr;
	fptr=(fopen("d.dat","w"));
	if(fptr==NULL) {
		printf("Error!");
		exit(1);
	}
	for (i=0;i<n;++i) {
		printf("For student%d\nEnter name: ",i+1);
        fflush(stdin);
		gets(name);
		//scanf("%s",&name);
        printf("Enter Roll No: ");
        fflush(stdin);
        scanf("%d",&rollno);
		printf("Enter marks: ");
		scanf("%d",&marks);
		
		fprintf(fptr,"\nName: %s \nRoll No: %d \nMarks=%d \n",name,rollno,marks);
	}
    
	fclose(fptr);
	return 0;
}*/
