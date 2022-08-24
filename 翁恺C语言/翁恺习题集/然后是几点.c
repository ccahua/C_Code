#include<stdio.h>

int main(){
	int time,minutes;

	scanf("%d %d",&time,&minutes);

	int hour1 = time/100;

	int minute1 = time%100;

	int minute2 = (minutes+minute1+60)%60;

	int hour2 = (((hour1+24)*100+minutes+minute1)/100)%24;

	time = hour2*100+minute2;

	printf("%d\n",time);

	return 0;
}
