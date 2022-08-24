#include<stdio.h>

int main(){
	char c = 127;
	printf("sizeof(char)=%d\n",sizeof(char));
	c = c+1;
	printf("%d\n",c);
	return 0;
}

