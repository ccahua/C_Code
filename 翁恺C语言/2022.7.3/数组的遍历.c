#include<stdio.h>

int main(){
	char ac[] = {0,1,2,3,4,5,6,7,8,9,-1};
	char *p = ac;
	for(int i = 0;i<sizeof(ac)/sizeof(ac[0]);i++){
		printf("%d\n",ac[i]);
	}

	while(*p != -1){
		printf("%d\n",*p++);
	}
	return 0;
}