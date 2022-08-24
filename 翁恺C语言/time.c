#include<stdio.h>

int main(){
	//时间差
	int hour1,minute1;
	int hour2,minute2;
	printf("请输入时间：");
	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);
	
	int t=(hour2*60+minute2)-(hour1*60+minute1);
	//隐含条件是后面的时间比前面的大
	printf("时间差是%d小时%d分钟\n",t/60,t%60);

	return 0;
}
