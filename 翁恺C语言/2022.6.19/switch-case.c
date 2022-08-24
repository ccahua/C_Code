#include<stdio.h>

int main(){
	const int MIN=2;
	int type;

	scanf("%d",&type);
	//switch()里的数据必须是整型的
	switch(type){
	case 1:
		printf("早上好！");
		break;
	//只有C99支持const变量作为判断条件
	case MIN:
		printf("中午好！");
		break;
	case 2+1:
		printf("下午好！");
		break;
	case 4:
		printf("晚上好！");
		break;
	default:
		printf("抱歉，我没听清^_^");
		break;
	}
	printf("\n");
	/*
	今天明白了switch-case语句和if-else语句的区别，
	switch语句不用去做比较，直接根据括号里面的值来去执行，
	而if-else语句需要按顺序从上到下依次比较，找到匹配的执行语句
	但是if-else可以完全取代switch-case但是
	switch-case不能取代if-else
	如if(x>999){
		...
	}else if(x > 99){
		...
	}else if(x > 9){
		...
	}else{
		...
	}如果转化为switch-case是需要条件变成整型来去判断这就是switch-case语句的缺点也是优点。
	*/

	return 0;
}