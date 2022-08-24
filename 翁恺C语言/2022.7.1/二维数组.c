#include<stdio.h>

int main(){
	const int k = 5;
	int a[][k] = {
		0,1,2,3,4,
		5,6,7,
	};
	for(int i=0;i<2;i++){
		for(int j=0;j<5;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}