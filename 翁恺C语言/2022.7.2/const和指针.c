#include<stdio.h>

int main(){
	int i = 1;
	int j = 2;
	int * const p = &i;
	//可以看作int * (const p) 因为p是指针变量，则p变量保存的地址是无法变化的，但是所指向的那个值是可以变化的
	//p = &j; ---错误的
	*p = j;  //正确的

	int const *q = &j;
	//可以看作int const (*q) 这里可以理解为*q是指向的那个值，而现在q所指向的那个值是无法变化的。
	//但是q地址变量保存的地址是可以变化的，也就是不能通过p去做修改
	//*q = i; -- 错误的
	q = &i; //--正确的
	return 0;
}