//求平均数
#include<stdio.h>

int main(){
	int a;
	double sum = 0;
	int cnt = 0;
	scanf("%d",&a);
	while(a != -1){
		sum += a;
		cnt++;
		scanf("%d",&a);
	}
	if(cnt>0){
		printf("%f\n",sum/cnt);
	}
	return 0;
}
