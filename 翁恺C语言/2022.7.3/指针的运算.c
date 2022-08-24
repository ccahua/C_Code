#include<stdio.h>

int main(){
	char ac[]={0,1,2,3,4,5,6,7,8,9,};
	char *p = ac;
	char *p1 = &ac[4];
	char *p2 = &ac[9];

	printf("p2-p1=%d\n",p2-p1);

	printf("p=%p\n",p);
	printf("p++=%p\n",++p);

	//*(p+n) <==> ac[n]; 两者是完全等价的，
	int ai[]={0,1,2,3,4,5,6,7,8,9,};
	int *q = ai;
	int *q1 = &ai[4];
	printf("q1-q=%d\n",q1-q);//指针减法不是地址值的相加减，而是地址值/sizeof(类型)，就是两个指针之间存放该类型的个数。

	printf("q=%p\n",q);
	printf("(++q)=%p\n",(++q));

	double ad[]={0,1,2,3,4,5,6,7,8,9,};
	double *r = ad;
	printf("r=%p\n",q);
	printf("r+1=%p\n",++r);
	return 0;
}