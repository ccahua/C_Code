#include<stdio.h>

int main(int argc, char const* argv[]) {
	//位运算
	unsigned char c = 0xAA;
	printf(" c=%hhx\n", c);
	printf("~c=%hhx\n", (char)~c);//取反
	printf("-c=%hhx\n", (char)-c);//
	unsigned char b = 0xA5;
	printf("  b=%d\n",b);
	printf("b<<2=%d\n", b << 2);

	int d = 0x80000000;
	unsigned int e = 0x80000000;
	printf("d=%d\n", d);
	printf("e=%u\n", e);
	printf("d>>=%d\n", d >> 1);
	printf("e>>=%d\n", e >> 1);
	return 0;
}