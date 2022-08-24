#include<stdio.h>

int main(){
	const int MIN=2;
	int type;

	scanf("%d",&type);
	switch(type){
	case 1:
		printf("早上好！");

	case MIN:
		printf("中午好！");
		break;
	case 2+1:
		printf("下午好！");

	case 4:
		printf("晚上好！");
		break;
	default:
		printf("抱歉，我没听清^_^");
		break;
	}
	printf("\n");

	return 0;
}