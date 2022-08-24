#include<stdio.h>


int main(int argc, char const* argv[]) {
	printf("%s:%d\n", __FILE__, __LINE__);//FILE表示文件名、LINE表示当前的行号
	printf("%s:%s\n", __DATE__, __TIME__);
	return 0;
}