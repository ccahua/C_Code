#include<stdio.h>

int divide(int a, int b, int *result);

int main(){
	int a = 5,b = 0;
	int result;
	if(divide(a, b, &result)){
		printf("%d/%d=%d",a,b,result);
	}else{
		printf("您输入的数字有问题！");
	}
	return 0;
}

int divide(int a, int b, int *result){
	int ret = 1;
	if(b == 0){
		ret = 0;
	}else{
		*result = a/b;
	}
	return ret;
}
//这个程序是通过指针得到结果，而可能出现结果有问题的情况出现，所以又运用了函数的返回值来判断计算是否正确。
//这也是指针的应用场景之一。
//任何地址变量使用之前都需要赋值。
