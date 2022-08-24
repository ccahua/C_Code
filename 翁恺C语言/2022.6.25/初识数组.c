#include<stdio.h>

int main(){
	int a;
	double sum = 0;
	int cnt = 0;
	int num[100];
	scanf("%d",&a);
	while(a != -1){
		num[cnt] = a;
		sum += a;
		cnt++;
		scanf("%d",&a);
	}
	if(cnt>0){
		printf("%f\n",sum/cnt);
		for(int i=0;i<cnt;i++){
			if(num[cnt]>sum/cnt){
				printf("%d\n",num[cnt]);
			}
		}
	}
	
	return 0;
}
