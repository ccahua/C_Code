#include<stdio.h>

int main(){
	//交换两个数
	int a=5,b=6;
	int c;
	c=a;
	a=b;
	b=c;
	printf("a=%d\nb=%d\nc=%d\n",a,b,c);
	return 0;
}
