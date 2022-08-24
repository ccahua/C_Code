#include<stdio.h>

int main(){
	const maxNumber = 25;
	int prime[maxNumber];


	//for test <--
	printf("\t");
	for(int i = 2;i<maxNumber;i++){
		printf("%4d",i);
	}
	printf("\n");
	//for test -->


	for(i = 0;i<maxNumber;i++){
		prime[i] = 1;
	}

	for(int x = 2;x<maxNumber;x++){
		if(prime[x]){
			for(int i = 2;i*x<maxNumber;i++){
				prime[i*x] = 0;
			}
		}
		//for test <--
		printf("%d\t",x);
		for(i = 2;i<maxNumber;i++){
			printf("%4d",prime[i]);
		}
		printf("\n");
		//for test -->
	}

	for(i = 2;i<maxNumber;i++){
		if(prime[i]){
			printf("%d\t",i);
		}
	}
	/*printf("\n");
		for(i = 2;i<maxNumber;i++){
		if(prime[i]){
			printf("%d\t",prime[i]);
		}
	}*/
	printf("\n");
	return 0;
}