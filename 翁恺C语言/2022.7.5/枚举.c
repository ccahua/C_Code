#include<stdio.h>

enum color {red, yellow, green,Numofcolor};

void f(enum color c);

int main(void){

	enum color t = green;
	f(t);
	scanf("%d",&t);
	f(t);
	return 0;
}

void f(enum color c){
	printf("%d\n",c);
}
//枚举这一块老师说的很少（多?)我反正听的是稀里糊涂，没有认识到枚举有什么用途，但我预感应该是有用的，即存在就有它的意义，这一块我没听懂。