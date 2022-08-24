#include<stdio.h>

struct point {
	int x;
	int y;
};

void getStruct(struct point p);

void output(struct point p);
int main() {

	struct point y = { 0,0 };
	getStruct(y);
	output(y);
	return 0;

}

void getStruct(struct point p) {
	scanf("%d", &p.x);
	scanf("%d", &p.y);

	printf("%d,%d\n", p.x, p.y);
}

void output(struct point p) {
	printf("%d,%d\n", p.x, p.y);
}
//这里的结构体作为函数参数，只是把值传过去了，在函数中复制了一个相等的结构
//所以在函数中改变后在函数中无法输出。