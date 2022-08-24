#include<stdio.h>

int main(){
	//强制转换把高位的数据给舍弃了。
	//变量地址的大小、数据类型和int是否相等，取决于编译器（软件）和你电脑的架构（硬件）。
	//要用printf函数输出一个地址，需要用%p（用以输出指针类型数据。PS：指针就是地址）
	int i = 0;
	int p = (int)&i;
	//p = (int)&(i++);
	//p = (int)&(++i);
	//p = (int)&(i+p);
	//以上的三种写法都是错误的
	printf("0x%x\n",p);
	printf("0x%x\n",&i);
	printf("%p\n",&i);
	printf("%lu\n",sizeof(int));
	printf("%lu\n",sizeof(&i));
	return 0;
}