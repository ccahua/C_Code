#include<stdio.h>

struct point {
	int x;
	int y;
};

struct point getStruct();

void output(struct point p);
int main() {

	struct point y = { 0,0 };
	y = getStruct();
	output(y);
	return 0;

}

struct point getStruct() {
	struct point p;
	scanf("%d", &p.x);
	scanf("%d", &p.y);

	printf("%d,%d\n", p.x, p.y);

	return p;
}

void output(struct point p) {
	printf("%d,%d\n", p.x, p.y);
}