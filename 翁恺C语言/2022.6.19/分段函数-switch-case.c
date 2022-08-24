#include<stdio.h>

int main(){
	
	int x=0,f=0;
	scanf("%d",&x);
	int type = x<0;
	switch(type){
	case 1:
		f = -1;
		break;
	case 0:
		f = 2 * x;
		break;
	}
	printf("f = %d\n",f);
	return 0;
}