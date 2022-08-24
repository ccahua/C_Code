#include<stdio.h>

int main() {
	printf("%9d\n", 123);

	printf("%-9d\n", 123);//-代表左对齐

	printf("%+9d\n", 123);//相当于在一个整数前面加个数的符号。

	printf("%-+9d\n", 123);

	printf("%09d\n", 324);//填充0的作用。

	printf("%9.2f\n", 123.456);//总共占9位，小数是两位

	printf("%*d\n", 5, 321);//这个*号代表的是5

	printf("%.*f\n", 3, 321.3);//这个“*”代表的是3
	return 0;
}