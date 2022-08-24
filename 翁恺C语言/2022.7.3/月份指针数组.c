#include<stdio.h>

int main(){
	char *month[] = {
		"January","February","March","April","May","June","July",
		"August","September","October","November","December"
	};
	printf("请输入月份:");
	int num;
	scanf("%d",&num);
	
	printf("%s\n",month[num-1]);

	return 0;
}