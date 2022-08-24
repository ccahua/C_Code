#include<stdio.h>
int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes);
//构造素数表
int main(){
	const number = 10;
	int prime[number] = {2};
	int count = 1;
	int x = 3;
	/*{
		printf("\t\t");
		for(int i =0;i<number;i++){
			printf("%d\t",i);
		}
		printf("\n");
	}*/
	while(count < number)
	{
		if(isPrime(x, prime, count))
		{
			prime[count++] = x;
		}
		/*{
			printf("x=%d \tcnt=%d\t",x,count);
			for(int i = 0;i<number;i++){
				printf("%d\t",prime[i]);
			}
			printf("\n");
		}*/
		x++;
	}
	for(int i = 0;i<number;i++){
		printf("%d",prime[i]);
		if((i+1)%5==0&&i!=0){
			printf("\n");
		}else{
			printf("\t");
		}
	}
	return 0;
}

int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes){
	int ret = 1;
	for(int i = 0;i<numberOfKnownPrimes;i++){
		if(x % knownPrimes[i]==0){
			ret = 0;
			break;
		}
	}
	return ret;
}

