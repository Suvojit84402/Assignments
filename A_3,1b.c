#include<stdio.h>

void sort(int *arr,int n){
	int temp,j,i;
	printf("Enter the elements of the array: \n");
	for(i=0;i<n;i++){
	printf("The element- %d: ",i);
	scanf("%d",(arr+i));
}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(*(arr+j)>*(arr+j+1)){
		temp=*(arr+j+1);
		*(arr+j+1)=*(arr+j);
		*(arr+j)=temp;
	}
}
}	
	printf("\nThe sorted array is: ");
	for(i=0;i<n;i++){
	printf("%d, ",*(arr+i));
}
}
int main()
{
	int n;
	printf("Enter the number of elements to be stored: ");
	scanf("%d",&n);
	int arr[n];
	sort(arr,n);

	return 0;
}

