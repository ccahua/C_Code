#include"array.h"
#include<stdio.h>
#include<stdlib.h>

const int BLOCK_SIZE = 20;

//typedef struct {
//	int* array;
//	int size;
//} Array;

Array array_create(int init_size) {
	Array a;
	a.size = init_size;
	a.array = (int*)malloc(sizeof(int) * a.size);
	return a;
}
void array_free(Array* a) {
	free(a->array);
	a->array = NULL;
	a->size = 0;
}

//封装
int array_size(const Array* a) {
	return a->size;
}
void array_inflate(Array* a, int more_size) {
	int* p = (int*)malloc(sizeof(int) * (a->size + more_size));
	int i;
	for (i = 0; i < a->size; i++) {
		p[i] = a->array[i];
	}//memcpy
	free(a->array);
	a->array = p;
	a->size += more_size;
}

int* array_at(Array* a, int index) {
	if (index >= a->size) {
		array_inflate(a, (index / BLOCK_SIZE + 1) * BLOCK_SIZE - a->size);
	}
	return &(a->array[index]);
}
//<--这里是另一种的得到数组相应位置的值
int array_get(const Array* a, int index) {
	return a->array[index];
}
//这里是对数组相应的位置赋值
void array_set(Array* a, int index, int value) {
	a->array[index] = value;
}
// 如果用的是array_at函数只有一个就可以了，相应的函数的赋值只需*调用函数-->


int main(int argc, char const* argv[]) {
	Array a = array_create(100);
	printf("%d\n", array_size(&a));
	printf("%d\n", a.size);
	//这种就是封装，保护函数里面的实现细节，而不应该是直接使用这个a.size。
	/*这段代码是可以随着输入的数增加数组也可以增加的代码。*/
	int number = 0;
	int cnt = 0;
	while (number != -1) {
		scanf("%d", &number);
		*array_at(&a, cnt++) = number;
	}


	*array_at(&a, 0) = 22;
	printf("%d\n", *array_at(&a, 0));
	array_free(&a);

	return 0;
}