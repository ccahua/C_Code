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
			if(cnt == 1){
				printf("Bingo!\n");
			}else if(cnt <= 3){
				printf("Lucky You!\n");
			}else {
				printf("Good Guess!\n");
			}
			flag = 1;
			break;
		}
	}while(cnt < n);
	if(cnt == n){
		if(flag == 0){
			//这里的两个if结构代替逻辑运算符
			printf("Game Over\n");
		}
	}
	return 0;
}

