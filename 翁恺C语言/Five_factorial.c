#include<stdio.h>

int main(){
	int t=1,i=2;
	while(i<=5){
		t=t*i;
		i++;
	}
	printf("5!=%d\n",t);
	return 0;
}
