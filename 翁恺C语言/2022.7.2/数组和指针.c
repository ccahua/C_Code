#include<stdio.h>

void minmax(int *a, int len, int *max, int *min);

int main(){
	int a[]={6,4,2,0,1,3,54,68,2};
	int max,min;
	printf("main sizeof(a)=%lu\n",sizeof(a));
	printf("main &a=%p\n",a);
	printf("a[1] = %d\n",a[1]);
	minmax(a, sizeof(a)/sizeof(a[0]), &max, &min);
	printf("min=%d,max=%d\n",min,max);
	int *p = &min;
	printf("*p=%d\n",*p);
	printf("p[0]=%d\n",p[0]);
	printf("*a=%d\n",*a);
	//int b[] = a;这种写法是不可以的，因为int b[] 被看作是const变量，不能被赋值
	//int b[] -->int * const b;
	int *q = a;
	return 0;
}

void minmax(int *a, int len, int *max, int *min){
	*max = *min =a[0];
	printf("main sizeof(a)=%lu\n",sizeof(a));
	printf("minmax a=%p\n",a);
	a[1] = 5;
	for(int i=1;i<len;i++){
		if(a[i]>*max){
			*max=a[i];
		}
		if(a[i]<*min){
			*min = a[i];
		}
	}
}
