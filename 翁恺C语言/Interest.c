#include<stdio.h>

int main(){
	//求3年的银行利息
	int x;
	printf("请输入本金（元）：");
	scanf("%d",&x);
	double amount=x*(1+0.033)*(1+0.033)*(1+0.033);
	printf("本息和为：%f",amount);
	return 0;
}
