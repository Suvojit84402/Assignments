/*Write a program (W.A.P.) to find the frequency of the digits
 of any number i.e. in 131 frequency of 1 is 2
& frequency of 3 is 1
*/

#include<stdio.h>

int main(){
	int num, freq[10]={0};
	printf("enter an integer: ");
	scanf("%d", &num);

	while(num){
		int rem= num%10;
		freq[rem]++;
		num /=10;
	}
	int i;
	for(i=0; i<=9; i++){
		printf("frequency of %d = %d \n", i, freq[i]);

	}
	return 0;
}

