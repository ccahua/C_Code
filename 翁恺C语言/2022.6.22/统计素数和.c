#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int m,n;
	int cnt = 0;
	int sum = 0;
	scanf("%d %d",&m,&n);
	while(m<=n){
		int i = 2;
		while(i<=m){
			if(m%i==0){
				//不是素数
				break;
			}
			i++;
		}
		if(i==m){
			//是素数
			cnt++;
			sum += m;
		}
		m++;
	}
	printf("%d %d\n",cnt,sum);
	return 0;
}

