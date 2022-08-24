#include<stdio.h>

int main(){
	const int size = 10;
	int x;
	int cnt[size] = {0};
	scanf("%d",&x);
	while(x != -1){
		if(x>=0&&x<=9){
			cnt[x]++;
		}
			scanf("%d",&x);
	}
	for(int i = 0;i<size;i++){
		printf("%d:%d次\n",i,cnt[i]);
	}
	return 0;
}

