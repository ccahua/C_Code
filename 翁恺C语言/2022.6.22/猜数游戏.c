#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

	srand(time(0));
	int count = 0;
	int number = rand()%100+1;
	int a;
	printf("我已经想好了一个数！\n");
	do{
		printf("请猜这个1到100之间的数:\n");

		scanf("%d",&a);

		count++;
		if(a>number){
			printf("大了\n");
		}else if(a<number){
			printf("小了\n");
		}
		//这里少了个else好像没有什么问题哎。
	}while(a != number);

	printf("恭喜您，您一共就猜了%d次，就猜中了！\n",count);
	return 0;
}