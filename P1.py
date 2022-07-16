import math
def isPrime(n):
	if(n==1):
		return False;
	if(n==2):
		return True;
	if(n%2==0):
		return False;
	for i in range(3,int(math.sqrt(n)+1),2):
		if(n%i==0):
			return False;
	return True;


n=int(input("Enter max limit :"))
print("Primes in range 0 to ",n,"are:",end="  ")
for i in range(1,n+1):
	if(isPrime(i)):
		print(i,end="  ")
