#include<stdio.h>

int main(){
	printf("sizeof(char)=%d\n",sizeof(char));
	printf("sizeof(short)=%d\n",sizeof(short));
	printf("sizeof(int)=%d\n",sizeof(int));
	//int 就是用来表达寄存器的。
	printf("sizeof(long)=%d\n",sizeof(long));
	//printf("sizeof(long long)=%d\n",sizeof(long long));
	return 0;
}

