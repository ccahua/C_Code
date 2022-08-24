#include<stdio.h>

void sum(int begin,int end);//我想放在外面的好处就是别的函数调用这个函数的时候不用再次声明了。

int main(){
	//void sum(int begin,int end); 这是老版本的C语言的使用习惯。
	sum(1,10);
	sum(20,30);
	sum(30,45);

	return 0;
}

void sum(int begin,int end){
	int sum=0;
	for(int i=begin;i<=end;i++){
		sum+=i;
	}
	printf("%d到%d的和是%d\n",begin,end,sum);
}

