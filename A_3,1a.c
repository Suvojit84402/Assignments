#include <stdio.h>
int main()
{
    int a[500],i,n,min,max;
   
    printf("Enter size of the array : ");
    scanf("%d",&n);
 
    printf("Enter elements in array : \n");
    for(i=0; i<n; i++)
    {
    	printf("Enter element- %d: ",i);
        scanf("%d",&a[i]);
    }
 
    min=a[0];
    max=a[0];
    for(i=1; i<n; i++)
    {
         if(min>a[i])
		  min=a[i];   
		   if(max<a[i])
		    max=a[i];       
    }
     printf("Minimum of array is : %d",min);
          printf("\nMaximum of array is : %d",max);
 
 
    return 0;
}
