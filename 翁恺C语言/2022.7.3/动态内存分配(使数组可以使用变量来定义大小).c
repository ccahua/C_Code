#include<stdio.h>
#include<stdlib.h>

int main(){
	int a[4];//静态内存

	//静态分配的内存在栈里，每进入一个函数时都会建栈，
	//栈里会存放函数用到的参数、局部变量等信息，函数执行完以后，会出栈销毁栈，
	//这个过程就会释放你静态分配的数组内存，这是由系统自动完成的。

	int number;
	scanf("%d",&number);
	int *p;
	p = (int*)malloc(number*sizeof(int));//动态内存
	//动态分配的内存，实际在堆上，系统没法自动帮你去释放堆上的内存，
	//需要你自己写free或者delete来告诉操作系统需要帮你去释放堆上哪个位置的内存。
	for(int i=0;i<number;i++){
		scanf("%d",&p[i]);
	}

	for(i = number-1;i>=0;i--){
		printf("%d ",p[i]);
	}
	printf("\n");
	free(p);
	return 0;
}