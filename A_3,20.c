#include<stdio.h>
typedef struct
{
 int accno;
 float accbalance;
}CUSTOMER;
CUSTOMER update(CUSTOMER c);

int main()
{
 CUSTOMER c[100];
 int i,n;
 printf("Enter the no. of customer: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
    printf("\nEnter Details: \n");
    printf("Customer- %d: \n",i+1);
    printf("Enter the customer account number: ");
    scanf("%d",&c[i].accno);
    printf("Enter customer account balance: ");
    scanf("%f",&c[i].accbalance);
        c[i]=update(c[i]);
        printf("Updated balance is :%f",c[i].accbalance);
 }
 return 0;
}
CUSTOMER update(CUSTOMER c)
{
 c.accbalance+=((0.1)*(c.accbalance));
 return c;
}