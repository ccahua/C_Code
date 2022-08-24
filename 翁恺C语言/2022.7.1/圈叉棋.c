#include<stdio.h>

int main(){
	const int size = 3;
	int board[size][size];
	int result = -1; //-1:没人输赢 ，0:O赢了 ，1:X赢了
	int numberOfO,numberOfX;
	for(int i=0;i<size;i++){
		for(int j = 0;j<size;j++){
			scanf("%d",&board[i][j]);
		}
	}

	/*for test <--
	for(i=0;i<size;i++){
		for(int j = 0;j<size;j++){
			printf("%d ",board[i][j]);
		}
		printf("\n");
	}
	//for test -->*/

	//检查行
	for(i=0;i < size && result == -1;i++){
		numberOfO = numberOfX = 0;
		for(int j = 0;j<size;j++){
			if(board[i][j] == 1){
				numberOfX++;
			}else if(board[i][j] == 0){
				numberOfO++;
			}
			int numberOf_O = 0;
			int	numberOf_X = 0;
			if(board[j][i] == 1){
				numberOf_X++;
			}else if(board[j][i] == 0){
				numberOf_O++;
			}
			if(numberOfX == size || numberOf_X == size){
				result = 1;
			}else if(numberOfO == size || numberOf_O == size){
				result = 0;
			}
		}
	}
	//检查列
	/*for(int j = 0;j<size && result == -1;j++){
		numberOfO = numberOfX = 0;
		for(int i = 0;i<size;i++){
			if(board[i][j] == 0){
				numberOfO++;
			}else if(board[i][j] == 1){
				numberOfX++;
			}
			if(numberOfO == size){
				result = 0;
			}else if(numberOfX == size){
				result = 1;
			}
		}
	}*/

	//检查对角线(右斜线和左斜线)
	for(i = 0;i<size;i++){
		numberOfO = numberOfX = 0;
		if(board[i][i] == 0 && board[i][size-i-1] == 0){
			numberOfO++;
		}else if(board[i][i]==1 && board[i][size-i-1] == 1){
			numberOfX++;
		}
		if(numberOfO == size){
			result = 0;
		}else if(numberOfX == size){
			result = 1;
		}
	}
	//输出结果
	if(result == 1){
		printf("X赢了！\n");
	}else if(result == 0){
		printf("O赢了！\n");
	}else{
		printf("平手！\n");
	}
	return 0;
}