#include<stdio.h>

int main(){
	int a,b;
	printf("请输入两个整数：");
	scanf("%d %d",&a,&b);
	//scanf函数的读取
	//scanf("%d,%d",&a,&b);
	//scanf("%d %d",&a,&b);
	//以前认为两者的读取是相同的，其实不同，加了逗号，在终端输入数据的时候就要加逗号
	//而没有加逗号的输入的时候可以加空格，也可以是无限的回车，相比上面一种，这种没有
	//加逗号的更加方便输入，对输入的要求不严格。
	printf("%d + %d = %d\n",a,b,a+b);

	return 0;
}