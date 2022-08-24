#include<stdio.h>

int main(){
	int *p,q;
	int* p,q;
	//上面这两个定义只是定义了一个p指针变量，q只是一个普通的int型变量
	//正确定义
	int *p,*q;
	return 0;
}