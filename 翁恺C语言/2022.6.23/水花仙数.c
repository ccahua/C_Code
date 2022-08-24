#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int n;
	int mask = 1;
	scanf("%d",&n);
	int i = 1;
	while(i<=n){
		mask *= 10;
		i++;
	}
	int flag = mask/10;
	while(flag < mask){
		int num = flag;
		int sum = 0;
		while(num>0){
			int d = num%10;
			int k = 0;
			int j = 1;
			while(k<n){
				j *= d;
				k++;
			}
			sum += j;
			num /= 10;
		}
		if(sum == flag){
			printf("%d\n",flag);
		}
		flag++;
	}
	return 0;
}