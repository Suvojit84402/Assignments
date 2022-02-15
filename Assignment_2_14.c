/*Write a program to take one 2-D array, find the transpose of  it,
 finally print the multiplied value of the matrix with its transpose.*/

#include<stdio.h>

int main(){
	int r,c;
	printf("Enter the number of rows:\n");
	scanf("%d", &r);
	printf("Enter the number of columns:\n");
	scanf("%d", &c);
	int a[r][c],i,j;
	printf("Enter the elements of the matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		scanf("%d",&a[i][j]);
		}
	}
	int b[c][r];
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
		b[j][i]=a[i][j];
		}
	}
	printf("The transpose of the matrix is:\n");
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
		printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	int s[r][c],k;
	printf("Matrix after multiplication is \n");
	for(i=0;i<r;i++){
		for(j=0;j<r;j++){
			s[i][j]=0;
		for(k=0;k<c;k++){
		s[i][j]+=a[i][k]*b[k][j];
		}
		printf("%d\t",s[i][j]);
	}
	printf("\n");
	}
	return 0;
}
