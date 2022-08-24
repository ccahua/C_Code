#include<stdio.h>

int isPrime(int x);
//这个时间耗费只需要一半的时间
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

int isPrime(int x){
	int ret = 1;
	if(x==1 || x%2==0 && x!=2){
		ret = 0;
	}
	for(int i =3;i<x;i+=2){
		if(x%i==0){
			ret = 0;
			break;
		}
	}
	return ret;
}