#include<stdio.h>

int main(){
	int max(int x,int y,int z);

	int a,b,c;
	
	scanf("%d,%d,%d",&a,&b,&c);
	
	c = max(a,b,c);

	printf("max = %d\n",c);

	return 0;
}

int max(int x,int y,int z){
	int max;
	if(x>y){
		max=x;
	}else{
		max=y;
	}if(max<z){
		max=z;
	}
	return max;
}