#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	double sum = 0;
	double i = 1.0,j = 2.0;
	double t;
	while(n>0){
		sum += j/i;
		t = i;
		i = j;
		j = j+t;
		n--;
	}
	printf("%f\n",sum);
	return 0;
}

