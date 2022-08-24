#include<stdio.h>

typedef union {
	int i;
	char ch[sizeof(int)];
} CHI;//union 里的成员占用的是同一个内存，也就是这里的i和ch占用的是同一块内存。

int main(int argc, char const* argv[]) {
	CHI chi;
	int i;
	chi.i = 1234;
	for (i = 0; i < sizeof(int); i++) {
		printf("%02hhX", chi.ch[i]);
	}
	printf("\n");
}