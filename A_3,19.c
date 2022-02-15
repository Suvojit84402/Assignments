#include <stdio.h>
union employee
{
   float salary;
   int employeeid;
} uemployee;

struct employeee
{
   float salary;
   int employeeid;
} semployee;

int main()
{   
    int b;
    float a;
    printf("Enter Details: \n");
    printf("Enter Salary:\n");
    scanf("%f",&a);
    printf("Enter Employee ID:\n");
    scanf("%d",&b);
    a= uemployee.salary;
    b= uemployee.employeeid;
    a= semployee.salary;
    b= semployee.employeeid;
    printf("size of union = %d bytes", sizeof(uemployee));
    printf("\nsize of structure = %d bytes", sizeof(semployee));
   return 0;
}