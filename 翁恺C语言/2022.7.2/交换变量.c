#include<stdio.h>

void swap(int *p,int *q);

int main(){
	int a =5;
	int b =6;
	swap(&a,&b);
	printf("a=%d\nb=%d\n",a,b);
	return 0;
}

void swap(int *p,int *q){
	int t = *p;
	*p = *q;
	*q = t;
}
//指针变量的应用场景
	//1.变量的交换
	//2.函数返回多个值，某些值就只能通过指针返回
	//3.传入的参数实际上是需要保存带回的结果的变量
