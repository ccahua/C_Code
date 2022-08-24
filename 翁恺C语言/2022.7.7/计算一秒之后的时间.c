#include<stdio.h>

struct time {
	int hour;
	int minutes;
	int seconds;
};

struct time timeUpdate(struct time now);

int main() {
	struct time testTimes[] = {
		{11,59,59},{12,0,0},{1,29,59},{23,59,59},{19,12,27}
	};

	for (int i = 0; i < 5; i++) {
		printf("Time is %.2i:%.2i:%.2i",
			testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);

		testTimes[i] = timeUpdate(testTimes[i]);

		printf("...One scend later it's %.2i:%.2i:%.2i\n",
			testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);

	}
	return 0;
}

struct time timeUpdate(struct time now) {
	//我感觉这个很巧妙，先加加秒，然后判断是否等于60，如果等于那就进一，非常巧妙。
	++now.seconds;
	if (now.seconds == 60) {
		now.seconds = 0;
		++now.minutes;
		if (now.minutes == 60) {
			now.minutes = 0;
			++now.hour;
			if (now.hour == 24) {
				now.hour = 0;
			}
		}
	}
	return now;
}