#include<stdio.h>

struct point {
	int x;
	int y;
};

struct rectangle {
	struct point p1;
	struct point p2;
};

void printRect(struct rectangle r) {
	printf("<%d,%d> to <%d,%d>\n", r.p1.x, r.p1.y, r.p2.x, r.p2.y);
}

int main() {
	struct rectangle rects[] = {
		{{1,2},{0,0}},{{1,1},{3,3}}
		//这个首先是结构体数组，然后再是这个结构体包括了另一个结构体，这就是结构体数组的无限套娃。
	};//两个三角形
	for (int i = 0; i < 2; i++) {
		printRect(rects[i]);
	}
	return 0;
}