#include<stdio.h>

int main(){
	const int MINOR = 20;

	printf("请输入你的年龄：");
	int age;
	scanf("%d",&age);
	printf("您的年龄是%d岁\n",age);
	
	if(age <= MINOR){
		printf("年轻总是美好的！\n");
	}
	printf("年龄决定了你的精神世界，好好珍惜吧！\n");

	return 0;
}