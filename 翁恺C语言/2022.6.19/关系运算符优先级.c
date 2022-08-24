#include<stdio.h>

int main(){
	printf("%d\n",5==3);
	printf("%d\n",5>3);
	printf("%d\n",5<=3);

	printf("%d\n",7>=3+3);
	//关系运算符比算术运算符优先级低，比赋值运算符优先级高。
	int a=4;
	int r = a>0;
	printf("%d\n",r);

	// == 和 != 这两个的优先级比其它的关系运算符优先级低
	//连续的关系是从左到右进行的
	5>6 == 6>4

	6>5>4
	
	a == b == 6;

	a == b>0
	return 0;
}