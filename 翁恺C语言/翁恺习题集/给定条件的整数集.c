#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int a;
	int cnt = 0;
	scanf("%d",&a);
	for(int i=a;i<a+4;i++){
			for(int j=a;j<a+4;j++){
					for(int k=a;k<a+4;k++){
						if(i != j){
							if(i!=k){
								if(k!=j){
							printf("%d%d%d",i,j,k);
							cnt++;
							if(cnt % 6 !=0){
								printf(" ");
							}else{
								printf("\n");
							}
								}
							}
						}
						
					}
				
			}
	}
	return 0;
}