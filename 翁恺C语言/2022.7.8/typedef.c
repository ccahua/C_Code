#include<stdio.h>

typedef struct ADate {
	int month;
	int day;
	int year;
} date;
/*
* typedef struct {
* int month;
* int day;
* int year;
* } date;
* //这样也是可以的，这个结构体体是没有名字的，只是给他起了个别名。
*/

int main() {
	typedef int length;
	//typedef *char [10] string;//这个类型我不理解是什么意思

	length i = 521;
	date d = { 12,3,2022 };
	printf("%d-%d-%d\n", d.year, d.month, d.day);
	printf("%d\n", i);
	return 0;
}