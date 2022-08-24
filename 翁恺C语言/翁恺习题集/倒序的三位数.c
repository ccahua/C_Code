#include<stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	int x = a/100;
	int y = (a%100)/10;
	int z = a%10;
	printf("%d\n",x+y*10+z*100);

	return 0;
}
