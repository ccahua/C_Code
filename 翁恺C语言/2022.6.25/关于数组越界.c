#include<stdio.h>

int main(){
	int num[10];
	for(int i=0;i<15;){
		num[i] = i;
		i++;
	}
	for(int j=0;j<16;){
		printf("%d\n",num[j]);
		j++;
	}
	//对于这个程序可以随意越界，让我感到这个数组形同虚设。
	return 0;
}

