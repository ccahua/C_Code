#include<stdio.h>

int isPrime(int a);
//这个方法时间耗费比较长，
int main(){
	//判断素数
	int x;
	scanf("%d",&x);
	if(isPrime(x)){
		//是素数
		printf("%d是素数\n",x);
	}else{
		printf("%d不是素数\n",x);
	}
	return 0;
}

int isPrime(int a){
	int ret = 1;
	for(int i =2;i<a;i++){
		if(a%i==0){
			ret = 0;
			break;
		}
	}
	return ret;
}