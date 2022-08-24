#include<stdio.h>

int main(){
	//NULL和0地址
	int *p = NULL;
	int *q = 0;
	*p = 12;
	printf("%d\n",*p);
	return 0;
}