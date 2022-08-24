#include<stdio.h>

void function1(void);//确定没有参数，写void
void function();//这种格式不行，因为这种格式编译器认为是参数类型不确定，
//所以调用的时候可以传递参数也可以不传递参数。
//我这个编译器如果不写void会默认空

int main(){
	int a=1,b=2;
	function1();
	function();
	return 0;
}
void function1(void){
	printf("function1!");
}
void function(){
	int max,a,b;
	if(a>b){
		max = a;
	}else{
		max = b;
	}
}
		


