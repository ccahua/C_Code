#include<stdio.h>

int main(){
	int a,b;
	scanf("%d/%d",&a,&b);
	int i = a,j = b;
	while(j!=0){
		int t;
		t = j;
		j = i%j;
		i = t;
	}
	printf("%d/%d\n",a/i,b/i);
	return 0;
}

