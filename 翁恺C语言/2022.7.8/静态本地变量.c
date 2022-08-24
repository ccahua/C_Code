#include<stdio.h>

void f(void);

int main(int argc,char const *argv[]) {
	f();
	f();
	f();
	return 0;
}

void f(void) {
	static int all = 1;//本质上是全局变量。
	//静态本地变量是全局生存期，本地作用域。
	//初始化
	printf("in %s aAll = %d\n", __func__, all);
	all += 2;
	printf("in %s aAll = %d\n", __func__, all);
}