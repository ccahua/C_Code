#include<stdio.h>
//第一种形式
struct date{
	int month;
	int day;
	int year;
};//在函数外声明其它函数可以使用，在函数里声明只能在该函数里使用

//第二种形式
/*struct {
	int month;
	int day;
	int year;
}p1,p2;

//第三种形式
struct date{
	int month;
	int day;
	int year;
}p1,p2;*/

int main(int argc, const char *argv[]){

	//在纯C中，在一个代码块中变量声明必须在最前面.
	struct date time;
	//第二种赋值方式，这种赋值方式，在我的编译器中不能运行
	//struct date yesterday = {.month = 7, .day = 4, .year = 2022};

	//第三种赋值方式
	struct date tomorrow = {7,5, 2022};

	//第一种赋值方式
	time.month = 07;
	time.day = 05;
	time.year = 2022;

	printf("Today date is %i-%i-%i.\n",
		time.year,time.month,time.day);


	/*printf("Yesterday date is %i-%i-%i.\n",
		yesterday.year,yesterday.month,yesterday.day);*/

	printf("Tomorrow date is %i-%i-%i.\n",
		tomorrow.year,tomorrow.month,tomorrow.day);
	return 0;
}