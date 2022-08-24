#include<stdio.h>
#include<stdbool.h>

struct date {
	int month;
	int day;
	int year;
};

bool isLeap(struct date d);
int numberOfDays(struct date d);

int main(int argc, const char* argv[]) {

	struct date today, tomorrow;

	printf("Enter today a date (mm dd yy):");
	scanf("%d %d %d", &today.month, &today.day, &today.year);

	if (today.day != numberOfDays(today)) {
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
		//这点很巧妙，因为如果日期是2022-12-3就会先执行这个代码，
		//而下面的代码就不会执行了
	}else if (today.month == 12) {
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	}else {
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = tomorrow.year;
	}
	printf("Tomorrow's date is %i-%i-%i.\n",
		tomorrow.year, tomorrow.month, tomorrow.day);

	return 0;
}

bool isLeap(struct date d) {
	bool leap = false;
	if ((d.year % 4 == 0 && d.year %100 != 0) || d.year%400 == 0)
		leap = true;

	return leap;
}

int numberOfDays(struct date d) {
	int days;

	const int daysPerMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	if (d.month == 2 && isLeap(d))
		days = 29;
	else
		days = daysPerMonth[d.month - 1];

	return days;
}
