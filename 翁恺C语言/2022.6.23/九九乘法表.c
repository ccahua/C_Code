#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int n;
	scanf("%d",&n);
	int i = 1;
	int j = 1;
	while(i<=n){
		j = 1;
		while(j<=i){
			printf("%d*%d=%d",j,i,i*j);
			if(i*j>10){
				printf("  ");
			}else{
				printf("   ");
			}
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}

