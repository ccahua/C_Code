#include<stdio.h>

int a,b;
//主要是想看看全局变量有什么作用，但是想通了函数只能是形式参数，也可以不用参数
//全局变量可以全部的任意函数调用。

int main(){
	int changea();
	int changeb();
	a = 10;
	b = 20;
	printf("a=%d,b=%d\n",a,b);

	printf(
		"a=%d,"
		,
		changea()
		);
	//这一块主要是看看C语言到底有多么随意，最低限度不能拆分单词
	printf("b=%d\n",changeb());
	return 0;
}

int changea(){
	a=1;
	return a;
}

int changeb(){
	b=2;
	return b;
}



