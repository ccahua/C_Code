#include<stdio.h>

int main(){
	int x,f;
	scanf("%d",&x);
	if(x<0){
		f=-1;
	}else if(x==0){
		f = 0;
	}else{
		f = 2 * x;
	}
	printf("f=%d\n",f);
	return 0;
}