#include<stdio.h>

int main(){
	const int AMOUNT = 100;

	//AMOUNT = 90;
//这个const修饰符是说明这个变量的值是不变的，有两个好处：
//1.可以说明这个数字是代表什么意思，如果在程序中直接出现数字会令人很莫名其妙
//2.修改比较容易，如果修改只需要修改AMOUNT的值即可，如果没有使用这个const
//需要修改每个在程序中用的数字。
//const变量名通常是大写
	int price;
	printf("请输入金额（元）：");

	scanf("%d",&price);

	int change=100-price,a=price;
	//这里的a是用来检测C语言是否可以这样定义变量。
	printf("找您%d元和%d\n",change,a);

	return 0;
}