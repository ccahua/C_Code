#include<stdio.h>

int search(int num,int a[],int length);

int main(){
	int a[13] = {1,2,6,9,10,34,25,88,64,41,62,37,11};
	printf("请输入一个数字：");
	int x;
	scanf("%d",&x);
	int local = search(x,a,sizeof(a)/sizeof(a[0]));
	if(local > 0){
		printf("你查找的数字在数组的第%d个位置\n",local+1);
	}else{
		printf("该数组没有你要查找的数字!");
	}
	return 0;
}

int search(int num, int a[], int length){
	int ret = -1;
	for(int i=0;i<length;i++){
		if(num == a[i]){
			ret = i;
			break;
		}
	}
	return ret;
}

