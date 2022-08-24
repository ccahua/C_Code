#include<stdio.h>

void minmax(int a[], int len, int *max, int *min);

int main(){
	int a[]={6,4,2,0,1,3,54,68,2};
	int max,min;
	minmax(a, sizeof(a)/sizeof(a[0]), &max, &min);
	printf("min=%d,max=%d\n",min,max);
	return 0;
}

void minmax(int a[], int len, int *max, int *min){
	*max = *min =a[0];
	for(int i=1;i<len;i++){
		if(a[i]>*max){
			*max=a[i];
		}
		if(a[i]<*min){
			*min = a[i];
		}
	}
}
