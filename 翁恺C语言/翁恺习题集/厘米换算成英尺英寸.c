#include<stdio.h>

int main(){
	int cm,foot;
	int inch;
	scanf("%d",&cm);
	foot=cm/30.48;
 	inch=(cm/30.48-foot)*12;
	printf("%d %d\n",foot,inch);
	return 0;
}
