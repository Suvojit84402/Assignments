/*W.A.P to convert  the digits of an integer in two words.
Input: 3458
Output: Three Four Five Eight
*/


#include<stdio.h>

unsigned int main(){
	unsigned int num, rev=0;
	printf("enter an integer: ");
	scanf("%d", &num);

	while(num){
		unsigned int rem= num%10; 
		rev= rev*10 + rem;
		num /=10;
	}
	while(rev){
		unsigned int rem =rev%10;
		switch(rem){
			case 0: printf("zero ");	break;
			case 1: printf("one ");		break;
			case 2: printf("two ");		break;
			case 3: printf("three ");	break;
			case 4: printf("four ");	break;
			case 5: printf("five ");	break;
			case 6: printf("six ");		break;
			case 7: printf("seven ");	break;
			case 8: printf("eight ");	break;
			case 9: printf("nine ");	break;
			}
		rev /=10;
	}
	return 0;
}	 	 
