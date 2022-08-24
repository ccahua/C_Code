#include<stdio.h>

int main(){
	unsigned int c = 0;
	while(++c>0);
	c=c-1;
	printf("int字符类型可以表示的最大数为:%u\n",c);
	int cnt=0;
	while(c>0){
		c /= 10;
		cnt++;
	}
	printf("int类型可以表示的位数为：%d\n",cnt);
	//不管你在计算机内部是什么数，重点是我们如何看它。---翁恺
	return 0;
}

