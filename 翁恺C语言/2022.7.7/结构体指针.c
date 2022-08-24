#include<stdio.h>

struct point {
	int x;
	int y;
};

struct point* getStruct(struct point *p);

void output(struct point p);

void print(const struct point* p);
int main() {

	struct point y = { 0,0 };
	getStruct(&y);
	output(y);
	output(*getStruct(&y));
	print(getStruct(&y));
	*getStruct(&y) = (struct point){ 1,2 };//这个就是比较属于那种脑洞大开的那种。
	return 0;

}

struct point* getStruct(struct point *p) {
	//这里使用了结构指针进行对结构的值改变。
	scanf("%d", &(p->x));
	scanf("%d", &(p->y));

	printf("%d,%d\n", p->x, p->y);

	return p;
}

void output(struct point p) {
	printf("%d,%d\n", p.x, p.y);
}

void print(const struct point* p) {
	printf("%d,%d\n", p->x, p->y);
}