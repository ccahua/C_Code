#include<stdio.h>

int main(){
	int rand,n;
	int flag =0;
	scanf("%d %d",&rand,&n);
	int cnt = 0;
	do{
		int num;
		scanf("%d",&num);
		cnt++;
		if(num<0){
			//输入的是负数
			printf("Game Over\n");
			break;
		}
		//不是负数
		if(num > rand){
			printf("Too big\n");
		}else if(num < rand){
			printf("Too small\n");
		}else{
			flag =1;
			break;
		}
	}while(cnt < n);

	if(cnt == 1 && flag == 1){
		printf("Bingo!");
	}else if(cnt <= 3 && flag == 1){
		printf("Lucky You!\n");
	}else if(cnt > 3 && flag ==1){
		printf("Good Guess!\n");
	}else if(cnt == n && flag == 0){
		printf("Game Over\n");
	}
	return 0;
}

