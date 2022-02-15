/*W.A.P. to find all such triplets <x,y,z> where  x2+y2 = z2
X,Y< a given number n.
*/

#include<stdio.h>

int sq_root(int num){
	int i,j=0;
	for( i=1; i*i <= num; i++){
		if(i*i==num){
			j=1;
			break;
		}
	}
	if(j==0)
		return 0;
	else
		return i;
}
int main(){
	int x, y, z, n;
	printf("Enter n: ");
	scanf("%d", &n);

	for( x=1; x<n; x++){
		for( y=1; y<n; y++){
			z= sq_root((x*x)+(y*y));
			if(z != 0) 
				printf("%d %d %d  \n", x,y,z);
		}
	}
	return 0;
}

