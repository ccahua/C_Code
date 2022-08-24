#include<stdio.h>
#include<stdlib.h>

int main(){
	void *p = 0;//通常会把指针变量赋值为0。
	int cnt=0;
	//p=malloc(100*1024*1024);
	//p++;销毁内存只能从你借来的起始处销毁。
	//free(p);
	free(NULL);
	//纸上得来终觉浅，绝知此事要躬行
	return 0;
}
