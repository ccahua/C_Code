#include<stdio.h>

int max(int a, int b);

int main() {
	int a = 5;
	int b = 6;
	printf("%d\n", max(a, b));
	return 0;
}
//这个例子是说明项目的作用，项目会把所有的c文件，进行编译运行，这样就可以
//使得函数可以分布在不同的文件，可以很好的把一个项目变得非常有合理性。