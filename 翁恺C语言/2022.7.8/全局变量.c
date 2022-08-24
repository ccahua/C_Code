#include<stdio.h>

int gAll = 12;//全局变量如果没有初始化，机器会自动赋值0。

int all = 12;

//int b = all;//全局变量的初始化一定是常量。

const int c = 12;
//int b = c;//这种就可以...好吧这种在我的编译器也不行

void f(void);

int main(int argc,char const *argv[]) {
	printf("in %s gAll = %d\n", __func__, gAll);
	f();
	printf("in %s aAll = %d\n", __func__, gAll);
	return 0;
}

void f(void) {
	//int gAll = 1;//函数内部有与全局变量相同的变量，则全局变量被隐藏。
	{
		int gAll = 4;
		//上面这种情况是差不多的，在更小的范围之内可以重新定义更大范围的变量
	}
	printf("in %s aAll = %d\n", __func__, gAll);
	gAll += 2;
	printf("in %s aAll = %d\n", __func__, gAll);
}